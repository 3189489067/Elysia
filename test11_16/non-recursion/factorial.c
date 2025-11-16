#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fac(int n)
{
	int ret = 1;
	int i = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int result = fac(n);
	printf("%d\n", result);
	return 0;
}