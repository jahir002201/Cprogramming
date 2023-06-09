// C program to convert decimal number to binary

#include <stdio.h>

int convertDecimalToOctal(int decimalNumber);
int main(){
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    printf("%d in decimal = %d in octal", decimalNumber, convertDecimalToOctal(decimalNumber));
    return 0;
}
// function to convert decimal number to binary
int convertDecimalToOctal(int decimalNumber){
    int octalNumber = 0, i = 1;
    while (decimalNumber != 0){
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}