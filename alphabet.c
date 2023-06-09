// C program to check whether a character is an alphabet or not

#include <stdio.h>
int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is lowercase
    int lowercase = (c >= 'a' && c <= 'z');

    // evaluates to 1 if variable c is uppercase
    int uppercase = (c >= 'A' && c <= 'Z');

    // evaluates to 1 if c is either lowercase or uppercase
    int alphabet = lowercase || uppercase;
    if (alphabet)
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;
    }