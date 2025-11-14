#include <stdio.h>
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
																
	while (left <= right)
	{
		int mid = left + (right - left) / 2;				//一定要放到循环里 不然会死循环//防止整型溢出
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int sz = sizeof(arr) / sizeof(arr[0]);						//计算数组元素个数
	int k = 11;
	int left = 0;
	int right = sz - 1;											//数组下标从0开始所以右边界是sz-1
	int ret = binary_search(arr,k,sz);
	if (ret == -1)												//-1对应函数找不到的情况
	{
		printf("找不到\n");
	}
	else 
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}
