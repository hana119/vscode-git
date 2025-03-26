#include <stdio.h>
#define MONTHS 12

int main(void)
{
    double monthSalary = 1000.5;
    printf("$%2f", monthSalary*MONTHS);
    return 0;
}

// ?? 왜 실행이 안 되는 거야