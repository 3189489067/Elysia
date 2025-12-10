#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
my_strlen(const char str[])
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void my_strcpy(char* p1,char* p2)
{
	
	while (*p1++ = *p2++)
	{
	}
}
int main()
{
	char arr[] = "bit";
	char arr1[] = "abc";
	my_strcpy(arr, arr1);
	int len = strlen(arr);
	printf("%s", arr);// Ëæ»úÖµ
	return 0;
}
