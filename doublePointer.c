//double pointer

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **arr;
    int r, c, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    arr = (int **)malloc(r * sizeof(int *));
    for (i = 0; i < r; i++)
    {
        arr[i] = (int *)malloc(c * sizeof(int));
    }
    printf("Enter %d elements: ", r * c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);
    }
    printf("The elements are:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}