#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    char input[20] = { 0 };
    system("shutdown -s -t 60");
again:
    printf("请注意，你的电脑将在60秒内关机，如果输入我是猪，就取消关机\n");
    scanf("%s", input);
    if (strcmp(input, "我是猪") == 0)
    {
        system("shutdown -a");
        printf("已取消关机\n");
    }
    else
    {
        goto again;
    }
    return 0;
}