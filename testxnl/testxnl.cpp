
#include <stdio.h>
#include <stdint.h>
#include "xnl.h"

#ifdef WIN32
#include <windows.h>
#pragma warning(disable:4996)
BOOL APIENTRY DllMain(HMODULE hModule,
					  DWORD  ul_reason_for_call,
					  LPVOID lpReserved
					  )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

 
#else

#endif


XNLEnv * gs_env = 0;


XNLEXPORT xint XI_CDECL  XNLMain(XNLEnv * env, xint version){
	gs_env = env->getEnv();
	return 0;
}


XNLEXPORT xint XI_CDECL XNLExit(XNLEnv * env){
	gs_env->releaseEnv(gs_env);
	return 0;
}

XNLEXPORT xint XI_CDECL add(xint x,xint y){
	return x + y;
}




XNLEXPORT XObject * XI_CDECL getFileContent(xstring path){
	FILE * fp = fopen(path, "rb");

	if (fp != 0){
		char buffer[1024];
		int rd = fread(buffer, 1, 1024, fp);
		fclose(fp);

		XObject * pb =gs_env->createByteArray(rd);
		for (int i = 0; i < rd; i++){
			gs_env->setElementValue(pb, i, (xbyte)buffer[i]);
		}
		return pb;
	}
	return 0;
}