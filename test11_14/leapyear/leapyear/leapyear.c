#include <stdio.h>
int is_leap_year(int x)
{
	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))				//条件判断闰年
	{
		return 1;
	}
	return 0;
}
int main()
{
	int year = 0;
	for (year = 100; year <= 2000; year++)
	{
		if (is_leap_year(year))											//调用函数判断闰年
		{
			printf("%d\t ", year);
		}
	}
	return 0;
}