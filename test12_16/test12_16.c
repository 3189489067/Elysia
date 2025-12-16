#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double price = 0;
	int month = 0;
	int day = 0;
	int flag = 0;
	double i = 50.0;
	
printf("请输入价格 月份 日期 是否有优惠券（有为1 无为0）\n");
	scanf("%lf %d %d %d", &price, &month, &day, &flag);
	double ret = price;
	if (month == 11 && day == 11)
	{
		ret = (price - flag*50) * 0.7;
	}
	
	else if (month == 12 && day == 12)
	{
		ret = (price - flag * 50) * 0.8;
	}

	else
	{
		ret = price - flag * 50;
	}
	if (ret < 0)
	{
		ret = 0;
	}
	
	
	
	printf("最终价格为：%lf\n", ret);
	return 0;
}