// C program to reverse a sentence using recursion

#include <stdio.h>

void reverseSentence();
int main(){
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}
// function to reverse a sentence entered by user
void reverseSentence(){
    char c;
    scanf("%c", &c);
    if (c != '\n'){
        reverseSentence();
        printf("%c", c);
    }
}