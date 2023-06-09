// C program to add two distances (inch-feet) using structure

#include<stdio.h>

struct Distance{
    int feet;
    float inch;
} d1, d2, sumOfDistances;

int main(){
    printf("Enter information for 1st distance:\n");

    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);

    printf("\nEnter information for 2nd distance:\n");

    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);

    // adding feet
    sumOfDistances.feet = d1.feet + d2.feet;
    // adding inches
    sumOfDistances.inch = d1.inch + d2.inch;

    // changing to feet if inch is greater than 12
    while (sumOfDistances.inch >= 12.0){
        sumOfDistances.inch = sumOfDistances.inch - 12.0;
        ++sumOfDistances.feet;
    }

    printf("\nSum of distances = %d\'-%.1f\"", sumOfDistances.feet, sumOfDistances.inch);

    return 0;
}