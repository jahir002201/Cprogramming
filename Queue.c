// Queue

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int x)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

void dequeue()
{
    struct node *temp = front;
    if (front == NULL)
    {
        printf("Queue is Empty\n");
        return;
    }
    if (front == rear)
    {
        front = rear = NULL;
    }
    else
    {
        front = front->next;
    }
    free(temp);
}

int Front()
{
    if (front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    return front->data;
}

void print()
{
    struct node *temp = front;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int choice, value;
    printf("\n:: Queue Implementation using Linked List ::\n");
    while (1)
    {
        printf("\n****** MENU ******\n");
        printf("1. Enqueue\n2. Dequeue\n3. Front\n4. Print\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to be insert: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printf("Front Element: %d\n", Front());
            break;
        case 4:
            print();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\nWrong selection!!! Please try again!!!\n");
        }
    }
    return 0;
}