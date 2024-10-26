#include <stdio.h>

int main(void)
{
    int firstNum = 0, secondNum = 0, sum = 0;

    if (scanf("%d,%d", &firstNum, &secondNum) == 2)
    {
        sum = firstNum + secondNum;

        (firstNum < 0 || secondNum < 0) ? printf("(%d)+(%d)=(%d)\n", firstNum, secondNum, sum) : printf("%d+%d=%d\n", firstNum, secondNum, sum);
    }

    return 0;
}
