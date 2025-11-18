#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int jump(int n) {
    if (n <= 2) {
        return n;
    }
    else {
        return jump(n - 1) + jump(n - 2);
    }
}
int main() {
    int n;
    printf("请输入台阶数：");
    scanf("%d", &n);
    printf("共有%d种跳法\n", jump(n));
    return 0;
}