#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float J(int i) 
{
    int j;
    float k = 1;
    for (j = 1; j <= i; j++)
        k = k * j;
    return(k);
}
float C(int i, int j) 
{  /*定义组合数*/
    float k;

    k = J(j) / (J(i) * J(j - i));
    return(k);
}
int main() 
{
    int i = 0, j, k, n;  /*打印杨辉三角*/
    while (i <= 0 || i > 16) 
    {
        printf("请输入要打印的行数：");
        scanf("%d", &i);
    }
    printf("%d行杨辉三角如下：\n", i);
    for (j = 0; j < i; j++) 
    {
        for (k = 1; k <= (i - j); k++)
            printf("  ");
        for (n = 0; n <= j; n++)
            printf("%4.0f", C(n, j));
        printf("\n");
    }
    printf("\n\n");
    return 0;
}