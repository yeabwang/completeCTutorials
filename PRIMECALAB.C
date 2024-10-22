#include <stdio.h>
#include <math.h>

int main(void)
{
    int num = 11;
    int isPrime = 1;

    int i; 
    for(i= sqrt(num); i>1; i--)
    {
        if (num % i == 0) 
        {
            isPrime = 0;
        }
        else
        {
            printf("%d ",i);
        }
    }

}