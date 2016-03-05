#include <Windows.h>

#include<tchar.h> 

INT WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpszCmdLine,int nCmdShow){
	MessageBox(
		0,
		TEXT("Реализация алгоритма программы непосредственно в функции WinMain"),
		TEXT("Calculator"),
		MB_OK | MB_ICONINFORMATION);
	return 0;
}

INT CALLBACK IDD_DIALOG1(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpszCmdLine,int nCmdShow){

	return 0;
}