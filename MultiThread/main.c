#include <Windows.h>
#include <stdio.h>

WINAPI HAM_THUC_THI(LPVOID lpThreadParameter)
{
	while (1)
	{
		
		printf("[Task1] Say hello\r\n");
		Sleep(1000);
	}
}
void main()
{
	HANDLE thread = CreateThread(NULL, 32, HAM_THUC_THI, NULL, NULL, NULL);
	
	while (1)
	{
		
		printf("[Task 2] Xin chao\r\n");
		Sleep(1000);
	}

}