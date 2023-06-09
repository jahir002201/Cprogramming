// C program to check whether a number is palindrome or not

#include<stdio.h>
int main(){
    int n, reverseInteger = 0, remainder, originalInteger;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalInteger = n;

    // reversed integer is stored in reversedInteger variable
    while(n != 0){
        remainder = n % 10;
        reverseInteger = reverseInteger * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignalInteger and reversedInteger are equal
    if(originalInteger == reverseInteger){
        printf("%d is a palindrome.", originalInteger);
    }
    else{
        printf("%d is not a palindrome.", originalInteger);
    }

    return 0;
}