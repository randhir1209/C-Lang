#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] == target) {
            return mid; 
        }
        else if (arr[mid] < target) {
            low = mid + 1; // Search the right half
        }
        else {
            high = mid - 1; // Search the left half
        }
    }
    
    return -1; 
}

int main() {
    int size, target, result;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements in sorted order: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &target);
    
    result = binarySearch(arr, size, target);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }
    
    return 0;
}