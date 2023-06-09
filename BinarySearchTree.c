// Binary Search Tree

#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *left;
    int data;
    struct Node *right;
};

struct Node *createNode(int data) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->left = NULL;
    node->data = data;
    node->right = NULL;
    return node;
}

struct Node *insert(struct Node *root, int data) {
    if (root == NULL) {
        root = createNode(data);
    } else if (data <= root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

int search(struct Node *root, int data) {
    if (root == NULL) {
        return 0;
    } else if (root->data == data) {
        return 1;
    } else if (data <= root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}

int main() {
    struct Node *root = NULL;

    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 8);
    root = insert(root, 12);

    int number;
    printf("Enter number to search: ");
    scanf("%d", &number);

    if (search(root, number)) {
        printf("Found\n");
    } else {
        printf("Not found\n");
    }

    return 0;
}