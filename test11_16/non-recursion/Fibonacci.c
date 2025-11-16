#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3)
	{
		c = a + b;
		a = b;					//换位
		b = c;					//换位
		n--;					//次数减少
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int result = fib(n);
	printf("%d\n", result);
	return 0;
}