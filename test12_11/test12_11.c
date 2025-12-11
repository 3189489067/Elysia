#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
int main()
{
	char string[80] = "a";
	strcpy(string, "Hello world from ");
	strcat(string, "strcpy ");
	strcat(string, "and ");
	strcat(string, "strcat!");
	printf("String = %s\n", string);

	return 0;
}