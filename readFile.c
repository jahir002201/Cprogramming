// C program to read a line from a file and display it

#include <stdio.h>
#include <stdlib.h>

int main(){
    char sentence[1000];
    FILE *fptr;

    if((fptr = fopen("program.txt", "r")) == NULL){
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%[^\n]", sentence);

    printf("Data from the file:\n%s", sentence);
    fclose(fptr);

    return 0;
}