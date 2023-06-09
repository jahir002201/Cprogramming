// C program to sort elements in lexicographical order (dictionary order)

#include<stdio.h>
#include<string.h>

int main(){
    int i, j;
    char str[10][50], temp[50];

    printf("Enter 10 words:\n");

    for(i = 0; i < 10; ++i){
        //^\n is used to read a string with spaces
        scanf("%s[^\n]", str[i]);
    }
    
    //Sorting strings using bubble sort
    for(i = 0; i < 9; ++i){
        for(j = i + 1; j < 10; ++j){
            //Swapping strings if they are not in the lexicographical order
            if(strcmp(str[i], str[j]) > 0){
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nIn the lexicographical order: \n");
    for(i = 0; i < 10; ++i){
        puts(str[i]);
    }

    return 0;
}