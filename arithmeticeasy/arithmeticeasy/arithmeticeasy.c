#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int k = 7;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);		//计算数组元素个数
	int left = 0;
	int right = sz - 1;						//右边下标等于数组元素个数减1
	int mid = 0;
	while (left <= right)					//这里需要循环
	{
		mid = (left + right) / 2;			//mid是最左边下标加最右边下标的一半
		if (arr[mid] < k)					//如果中间值小于k
		{
			left = mid + 1;					//左边下标等于中间值加1 让最左边下标向k方向移动 接近k 使范围减小
		}
		else if (arr[mid] > k)				//如果中间值大于k
		{
			right = mid - 1;				//右边下标等于中间值减1 让最右边下标向k方向移动 接近k 使范围减小
		}
		else								//如果中间值等于k  就说明找到了 因为范围缩小到只剩下一个值了
		{
			printf("找到了，下标是：%d\n", mid);
			break;     						//找到了就跳出循环
		}
	}
	if (left > right)						//如果最后左边下标大于右边下标 说明没有找到
	{
		printf("没有找到\n");
	}

	return 0;

}