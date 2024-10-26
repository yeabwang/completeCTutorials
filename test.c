#include <stdio.h>

int main(void)
{
    int num;

    if(scanf("%d", &num) == 1)
    {
        if(num%2==0 || num%3==0)
        {
            num--;
        }
        for(int i=num; i>2; i--)
        {
            int isPrime = 1;
            for(int j=3; j*j <i; j++)
            {
                if(i%j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if(isPrime)
            {
                printf("%d",i);
                return 0;
            }
        }
    }
    return 0;
}