#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int justify(void)
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int a = 1;
	int ret = justify();
	if (ret == 1)
	{
		printf("Ð¡¶Ë\n");
	}
	else
		printf("´ó¶Ë\n");
	return 0;
}