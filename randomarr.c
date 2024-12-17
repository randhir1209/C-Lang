//give an array for random order sigregrate 0 on left and 0 on right side traverse array once
#include<stdio.h>
int main()
 {
    int arr[] = {0, 1, 2, 0, 3, 0, 4, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Given Array: ");
    printArray(arr, n);
    segregateZeros(arr, n);
    printf("Array after segregation: ");
    printArray(arr, n);
     return 0;
}
void segregateZeros(int arr[], int n) {
    int left = 0,right;  
    for (right = 0; right < n; right++) {
        if (arr[right] != 0) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++; 
        }
    }
}
void printArray(int arr[], int n) {
    int i;
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

