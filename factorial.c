// C program to find factorial of a number

#include <stdio.h>
int main()
{
    int num, i;
    unsigned long long factorial = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);
    // show error if the user enters a negative integer
    if (num < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for (i = 1; i <= num; ++i)
        {
            factorial *= i; 
        }
        printf("Factorial of %d = %llu", num, factorial);
    }
    return 0;
}