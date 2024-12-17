//Find the second largest element in array.

#include <stdio.h>
#include <limits.h>  
int fSecondLargest(int arr[], int n) {
    if (n < 2) {
        return -1; 
    }
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}
int main() {
    int arr[] = {12, 35, 1, 10, 30, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = fSecondLargest(arr, n);
    if (secondLargest == -1) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }
    return 0;
}
