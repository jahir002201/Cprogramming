// Binary Search using Recursion

#include <stdio.h>

int binarySearch(int arr[], int low, int high, int x) {
    if (low > high) {
        return -1;
    }

    int mid = (low + high) / 2;

    if (arr[mid] == x) {
        return mid;
    } else if (arr[mid] < x) {
        return binarySearch(arr, mid + 1, high, x);
    } else {
        return binarySearch(arr, low, mid - 1, x);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 4;
    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }

    return 0;
}