/*
Description: The goal of this task is to take a number and try to find the largest prime number
Input：one integer
Output： the largest prime number within the range

Pseudo code

1. Accept the number from the user and validate the input if its int or not
2. Define a variable which will hold a true or false value after checking if a number is prime or not -- The default is its prime
3. Create a first loop to loop through each numbers till it reaches to the given number.
4. Create another nested loop to check the i on the first loop is divisible by numbers looping through in the second loop.
For design purposes - We don't need to check the entire array since it becomes very resource consuming process. Instead we can check the numbers
till we reach the square root of the number since the two sides of multiplications (before and after the square root) are mirrors.
5. We will attempt to divide i and j and check if its divisible by checking the reminder and if its divisible we don't have to check the rest.
6. If its not divisible by the numbers and reassign the value of the max prime.
7. Print the max prime.

Test case
Input: 100↵
Output: The max prime number is 97.↵

*/
#include <stdio.h>

int maxPrimeFinder(int num)
{
    int maxPrime=0;
    for (int i = 2; i <= num; i++)
    {
        int isPrime = 1; 
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0) 
            {
                isPrime = 0;
                break;  
            }
        }
        if (isPrime) 
        {    
            maxPrime = i;
        }
    }
    return maxPrime;
}

int main(void) 
{
    int num;

    if(scanf("%d", &num)==1 && num >=2)
    {
        printf("The max prime number is %d.\n", maxPrimeFinder(num));
    }
    else
    {
        printf("Invalid Input.");
    }

    return 0;
}
