#include <stdio.h>

// Function to input array values
void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to merge arrays, with the second array in reverse order
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    // Copy the first array as is
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    // Copy the second array in reverse order
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[n2 - 1 - i];
    }
}

int main() {
    int n1, n2;

    printf("Enter size of arr1: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter values of arr1:\n");
    inputArray(arr1, n1);

    printf("Enter size of arr2: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter values of arr2:\n");
    inputArray(arr2, n2);

    // Array to hold merged results
    int merged[n1 + n2];
    mergeArrays(arr1, n1, arr2, n2, merged);

    // Print merged array
    printf("Merged array:\n");
    for (int i = 0; i < (n1 + n2); i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    // Print size of merged array
    printf("Size of merged array: %d\n", n1 + n2);

    return 0;
}
