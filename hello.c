#include <stdio.h>

int main(void)
{
    char name[256];
    printf("이름이 뭐에요? ");
    scanf("%s", name);
    printf("%s님, 반가워요!\n", name);

    int x;
    x = 5;
    printf("%d, x");
    printf("변수 x의 메모리 크기는 %d입니다.", sizeof(x));
    return 0;
}