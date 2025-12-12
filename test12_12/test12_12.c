#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dest, const void* str, unsigned int num)
{
	assert(dest && str);
	void* ret = dest;
	if (dest < str)
	{
		while (num--)
		{
			*(char*)dest = *(char*)str;
			dest = (char*)dest = 1;
			str = (char*)str = 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)str + num);
		}
	}
	return ret;
}
int main()
{
	int arr1[20] = { 1,2,3,4,5,6,7 };
	int i = 0;
	my_memmove(arr1+2, arr1, 20);
	for (i = 0; i < 7; i++)
	{
		printf("%d", arr1[i]);
	}
	return 0;
}