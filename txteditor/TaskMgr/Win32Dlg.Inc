comment/*汇编语言实现的进程管理器，使用了 sysenter 进行快速系统调用
作者CPMorn.Dxmier QQ:233276111 Mail:3.vc@163.com */

include windows.inc
include kernel32.inc
include user32.inc
include Comctl32.inc
include shell32.inc
include Resource.inc
include msvcrt.inc
include advapi32.inc 
include psapi.inc 

includelib kernel32.lib
includelib user32.lib
includelib Comctl32.lib
includelib shell32.lib
includelib msvcrt.lib
includelib ntdll.lib
includelib advapi32.lib
includelib psapi.lib



DlgProc	PROTO	:HWND,:UINT,:WPARAM,:LPARAM
InserItemText PROTO nSub:dword ,szText:dword 
SetItemText PROTO nID:dword ,nSub:dword ,szText:dword 
InsertItem PROTO szStr:dword ,len:dword 
InitDialog PROTO hWin:HWND 
CheckProc PROTO nPID:dword ,szStr:dword 
TerminateSelectItemProcess proto
OnButton1002 proto
OnTimer proto 
UpdateProcessPrivilege proto 
GetProcessList proto 
CheckProcessEx proto
OnAbout Proto 
OnRClck proto 
OnMenu2  proto 
OnSize proto 
NtTerminateProcess proto hProcess:dword,uExitCode:dword 
.const

.data 
szColu1 db '进程名',0
szColu2 db '进程ID',0
szColu3 db '进程路径',0
szFmt db '%d',0
szToken db 'SeDebugPrivilege',0
szQuest db '警告:终止进程会导致不希望发生的结果，',0ah,0dh,'包括数据丢失和系统不稳定。在被终止前，',0ah,0dh,'进程将没有机会保存其状态和数据。确实',0ah,0dh,'想终止该进程吗?',0
szTitle db '任务管理器警告',0
bNeedRef dd 0 
lOldPid  dd 0
nIDCount dd 0
hBtn 	dd  0
btRef   dd 0
btct  dd 0
szSel   db '  /select,',0
szOpen   db 'open',0
szExplorer db 'EXPLORER.EXE',0


.data?

hInstance	dd ?
hMain 		HWND ?
hList 		HWND ?