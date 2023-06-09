//union

#include <stdio.h>

union Student {
    char name[20];
    int rollNo;
    float marks;
};

int main()
{
    union Student s1;
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.rollNo);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    printf("Name: %s\n", s1.name);
    printf("Roll number: %d\n", s1.rollNo);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}