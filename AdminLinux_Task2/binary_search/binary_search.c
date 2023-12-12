#include <stdio.h>

// Binary search function
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;  // Element found, return its index
        else if (arr[mid] < key)
            low = mid + 1;  // Search in the right half
        else
            high = mid - 1;  // Search in the left half
    }

    return -1;  // Element not found
}

int main() {
    // Create and initialize an array (must be sorted for binary search)
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Test the binary search function
    int key = 6;
    int result = binarySearch(arr, size, key);

    // Print the result
    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found in the array\n", key);

    return 0;
}

