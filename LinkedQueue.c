// Linked Queue

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Queue {
    struct Node *front;
    struct Node *rear;
};

void enqueue(struct Queue *q, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (q->rear == NULL) {
        q->front = newNode;
        q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

void dequeue(struct Queue *q) {
    if (q->front == NULL) {
        printf("Queue is empty\n");
    } else {
        struct Node *temp = q->front;
        q->front = q->front->next;
        free(temp);
    }
}

void printQueue(struct Queue *q) {
    struct Node *temp = q->front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = NULL;
    q->rear = NULL;

    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    enqueue(q, 4);

    printQueue(q);

    dequeue(q);
    dequeue(q);

    printf("\n");

    printQueue(q);

    return 0;
}
