// C program to find the sum of natural numbers

#include <stdio.h>
int main()
{
    int num, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // for loop terminates when num is less than i
    for (i = 1; i <= num; ++i)
    {
        sum += i;
    }

    printf("Sum = %d", sum);

    return 0;
}