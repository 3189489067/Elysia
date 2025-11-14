#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)				//为了提高效率，只需判断到sqrt(n) sqrt是开平方函数 需要包含math.h头文件
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)							//只判断奇数
	{
		if (is_prime(i))									//调用函数判断是否为素数
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}