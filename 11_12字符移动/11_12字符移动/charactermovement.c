#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "welcome to my codeworld!";
	char arr2[] = "#########################";
	int left = 0;
	int right = strlen(arr2) - 1;		//或者 intright = sizeof(arr2) / sizeof(arr2[0]) - 2; 原因是无论是strlen还是sizeof计算的都是字符串的长度都包含省略了的'\0'
	while (left <= right)
	{
		arr2[left] = arr1[left];		//将arr1中的字符逐个赋值给arr2
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(200);						//暂停200毫秒 头文件是#include <windows.h>
		system("cls");					//清屏命令 头文件是#include <stdlib.h>
		left++;								
		right--;						//向中间移动
	}	
	printf("%s\n", arr2);				//输出最终结果
	return 0;
}