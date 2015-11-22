// test.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "test.h"


// 这是导出变量的一个示例
TEST_API int testadd(int a,int b)
{
	return a+b;
}

