// C program to store information of a student using structure

#include<stdio.h>
struct student{
    char name[50];
    int roll;
    float marks;
} s;

int main(){
    printf("Enter information of students:\n\n");
    
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nDisplaying Information\n");
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);

    return 0;
}
