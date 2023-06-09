// Linked List

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void printList(struct Node *n) {
    while (n != NULL) {
        printf("%d ", n->data);
        n = n->next;
    }
}

int main() {
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // allocate 3 nodes in the heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // assign data in first node and link to second node
    head->data = 1;
    head->next = second;

    // assign data in second node and link to third node
    second->data = 2;
    second->next = third;

    // assign data in third node and link to null
    third->data = 3;
    third->next = NULL;

    printList(head);

    return 0;
}
