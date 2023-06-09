// C program to access elements of an array using pointers

#include <stdio.h>

int main(){
    int data[5], i;

    printf("Enter elements: ");
    for(i = 0; i < 5; ++i){
        // Equivalent to scanf("%d", &data[i]);
        scanf("%d", data + i);
    }

    printf("You entered: \n");
    for(i = 0; i < 5; ++i){
        // Equivalent to printf("%d\n", data[i]);
        printf("%d\n", *(data + i));
    }

    return 0;
}