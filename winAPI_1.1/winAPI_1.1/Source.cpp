#include <windows.h> 
#include <tchar.h>


INT WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpszCmdLine, int nCmdShow) {
	TCHAR szMessage1[] = TEXT("Hi, my name is Maxim");
	TCHAR szMessage2[] = TEXT("I live in Minsk");
	TCHAR szMessage3[] = TEXT("I'm learning C++ and WinAPI");
	UINT nCount = (lstrlen(szMessage1) + lstrlen(szMessage2) + lstrlen(szMessage3)) / 3;
	TCHAR buffer[4];
	wsprintf(buffer, L"%i", nCount);
	MessageBox(0, szMessage1, TEXT("Simple resume"), MB_OK | MB_ICONINFORMATION);
	MessageBox(0, szMessage2, TEXT("Simple resume"), MB_OK | MB_ICONINFORMATION);
	MessageBox(0, szMessage3, TEXT("Simple resume"), MB_OK | MB_ICONINFORMATION);
	MessageBox(0, buffer, TEXT("Simple resume"), MB_OK | MB_ICONINFORMATION);
	return 0;
}