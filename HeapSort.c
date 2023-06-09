//Heap Sort

#include<stdio.h>
#include<limits.h>

int heap[1000000], heapSize;

void Init()
{
    heapSize = 0;
    heap[0] = -INT_MAX;
}

void Insert(int element)
{
    heapSize++;
    heap[heapSize] = element; /*Insert in the last place*/
    /*Adjust its position*/
    int now = heapSize;
    while (heap[now / 2] > element)
    {
        heap[now] = heap[now / 2];
        now /= 2;
    }
    heap[now] = element;
}

int DeleteMin()
{
    int minElement, lastElement, child, now;
    minElement = heap[1];
    lastElement = heap[heapSize--];

    for (now = 1; now * 2 <= heapSize; now = child)
    {
        child = now * 2;
        if (child != heapSize && heap[child + 1] < heap[child])
        {
            child++;
        }
        if (lastElement > heap[child])
        {
            heap[now] = heap[child];
        }
        else
        {
            break;
        }
    }
    heap[now] = lastElement;
    return minElement;
}

int main()
{
    int number_of_elements;
    printf("Enter no. of elements : ");
    scanf("%d", &number_of_elements);
    int iter, element;
    Init();
    printf("Enter %d elements : \n", number_of_elements);
    for (iter = 0; iter < number_of_elements; iter++)
    {
        scanf("%d", &element);
        Insert(element);
    }
    printf("Heap Sort Array : \n");
    for (iter = 0; iter < number_of_elements; iter++)
    {
        printf("%d ", DeleteMin());
    }
    printf("\n");
    return 0;
}