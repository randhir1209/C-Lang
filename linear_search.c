//W.A.P in c to perform linear search in 1D array.
#include<stdio.h>

void linearSearch(int arr[], int size, int key) {
    int found = 0; // Flag to check if the key is found

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Element %d found at index %d.\n", key, i);
            found = 1; // Key found
            break;     // Exit loop after finding the key
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }
}

int main() {
    int size, key;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size]; // Declare array

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    linearSearch(arr, size, key);

    return 0;
}