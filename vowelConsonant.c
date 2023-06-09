//C program to check vowel or consonant
#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    int lowercaseVowel, uppercaseVowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    // evaluates to 1 (true) if c is a lowercase vowel
    lowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    // evaluates to 1 (true) if c is a uppercase vowel
    uppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    // Show error message if c is not an alphabet
    if (!isalpha(c))
        printf("Error! Non-alphabetic character.");
    else if (lowercaseVowel || uppercaseVowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}