#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//编辑组合数计算函数
int J(int i)//阶乘
{
	int k = 1;
	int j = 0;
	for (j = 1; j <= i; j++)
	{
		k = k*j;
	}
	return k;
}
int C(int n, int m) 
{
	if (m > n || m < 0) return 0;
	return J(n) / (J(m) * J(n - m));
}
int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 1;
	int j = 0;
	int k = 0;
	int arr[1000] = { 1,0 };
	for (int i = 0; i <= line; i++) 
	{
		for (int j = 0; j <= i; j++) 
		{
			arr[k] = C(i, j);
			k++;
		}
	}
	k = 0;
	for(i = 0; i <=line+1; i++)
	{
		for (j = 0; j < line+1 - i; j++)
		{
			printf("  ");
		}
		for (j=0; j < i; j++)
		{
			printf("%4d", arr[k]);
			k++;
		}
		printf("\n");
	}
	return 0;
}