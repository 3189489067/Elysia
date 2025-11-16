#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 移动函数：打印从起始柱到目标柱的移动
void move(char start, char end) 
{
    printf("%c -> %c\n", start, end);
}
// 汉诺塔递归函数
void hanoi(int n, char start, char temp, char end) 
{
    if (n == 1) 
    {
        move(start, end); // 只有一个圆盘时，直接移动
    }
    else 
    {
        hanoi(n - 1, start, end, temp); // 将n-1个圆盘移到辅助柱
        move(start, end); // 将第n个圆盘移到目标柱
        hanoi(n - 1, temp, start, end); // 将辅助柱上的n-1个圆盘移到目标柱
    }
}
int main() 
{
    int n;
    printf("请输入汉诺塔的层数: ");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C'); // A为起始柱，B为辅助柱，C为目标柱
    return 0;
}//不会