#include <stdio.h>
#include <limits.h>

int main(void)
{
    int x = __INT_MAX__;
    printf("int형의 최댓값 x는 %d입니다.\n", x);
    printf("x + 1은 %d입니다.\n", x + 1);
    return 0;
}