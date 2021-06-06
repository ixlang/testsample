//xlang 
package System{
	public class out{
		public static int println(String text){
			return _system_.consoleWrite(text + "\n");
		}
		public static int print(String text){
			return _system_.consoleWrite(text);
		}
	};
};


using { System; };


class User32 : Library{
    public import "user32"{
        int stdcall MessageBoxA(Pointer, String ,String, int);
    };
    /*public static void loadUser32(){
        loadLibrary("user32");
    }*/
};

class Kernel32 : User32{
    public import "kernel32"{
        //int stdcall MessageBoxW(Pointer, String ,String, int);
        int stdcall AllocConsole();
    };
    
    /*public static void loadKernel32(){
        loadLibrary("user32");
        loadUser32();
    }*/
};

int main(String [] args){
    Kernel32.MessageBoxA(0l,"as","asd",0);
    //int k = Kernel32.MessageBoxW(0l,"as","asd",0);
    Kernel32.AllocConsole();
	System.out.println("hello world");
	_system_.sleep(3000);
	return 0;
}
