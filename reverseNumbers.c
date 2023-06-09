// C program to reverse a number

#include<stdio.h>
int main(){
    int n, reverseNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0){
        remainder = n % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        n /= 10;
    }

    printf("Reversed Number = %d", reverseNumber);

    return 0;
}