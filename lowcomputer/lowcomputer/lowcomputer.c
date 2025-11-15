#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include "Add.h"
#include "Sqr.h"
#include "Div.h"
#include "Mul.h"
#include "Sub.h"

int main()
{
	int a = 0;
	int b = 0;
	int n = 0;
    int result = 0;
	printf("请选择运算类型：1.加法 2.减法 3.乘法 4.除法 5.平方根\n");
	scanf("%d", &n);

	switch (n)
	{
	case 1:
	
		printf("请输入两个整数，以空格隔开：");
		scanf("%d %d", &a, &b);
		result = Add(a, b);
		break;

	case 2:

		printf("请输入两个整数，以空格隔开：");
		scanf("%d %d", &a, &b);
		result = Sub(a, b);
		break;

	case 3:
		printf("请输入两个整数，以空格隔开：");
		scanf("%d %d", &a, &b);
		result = Mul(a, b);
		break;
	case 4:
		printf("请输入两个整数，以空格隔开：");
		scanf("%d %d", &a, &b);
		result = Div(a, b);
		break;
	case 5:
		printf("请输入一个整数：");
		scanf("%d", &a);
		result = Sqr(a);
		break;
	}
	printf("结果是：%d\n", result);
	return 0;
}