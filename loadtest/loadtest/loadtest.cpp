// loadtest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "windows.h"

int _tmain(int argc, _TCHAR* argv[])
{
	printf("nihao\n");
	//typedef   int   (CALLBACK   *myfun1)(int a,int b);

	typedef int(*Dllfun)(int ,int);

	HINSTANCE hinst=::LoadLibrary(TEXT("C:\\vsworkstation\\test\\Release\\test.dll")); 
	if (NULL != hinst)
	{
		MessageBox(NULL,TEXT("SUCCESS"),NULL,MB_OK);
	}
	else
	{
		MessageBox(NULL,TEXT("Error"),TEXT("Error"),MB_OK);
	}
	int a=1;
	int b=2;


	Dllfun msg1;
	msg1 = (Dllfun)GetProcAddress(hinst, "testadd");
	if (NULL == msg1)
		MessageBox(NULL,TEXT("Error2"),TEXT("Error2"),MB_OK);
	else
	{
		MessageBox(NULL,TEXT("success2"),TEXT("success2"),MB_OK);
		int c = msg1(a,b);

		printf("jieguoshi   %d",c);
		getchar();
	}

	return 0;
}

