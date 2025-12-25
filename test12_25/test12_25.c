#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//int main()
//{
//	
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
int main()
{

	int* p = (int*)calloc(10,sizeof(int)); // 前面是要开辟的元素个数 后者参数为每个元素的大小
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));			//打印错误码
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	int* ptr = (int*)realloc(p, 8000);		//调整空间大小
	if (ptr != NULL)
	{
		p = ptr;			//防止开辟失败 返回为空
	}
	
	
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;
	return 0;
}