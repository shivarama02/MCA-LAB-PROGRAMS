#include <stdio.h>
#include <stdlib.h>

// Function declarations
void display(int arr[], int size, int index);
void sort(int arr[], int size);
int search(int arr[], int size, int target, int index);

int main() {
    int size, choice, element, searchResult;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    // Declare an array based on user input
    int arr[size];

    // Input the elements of the array using a simple for loop
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Main menu loop
    while (1) {
        printf("\nMenu:\n");
        printf("1. Display elements\n");
        printf("2. Sort elements\n");
        printf("3. Search an element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display(arr, size, 0);
                break;

            case 2:
                sort(arr, size);
                display(arr, size, 0);
                break;

            case 3:
                printf("Enter the element to search: ");
                scanf("%d", &element);
                searchResult = search(arr, size, element, 0);
                if (searchResult != -1) {
                    printf("Element %d found at index %d.\n", element, searchResult);
                } else {
                    printf("Element %d not found in the array.\n", element);
                }
                break;

            case 4:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function to display the elements of the array (Recursion)
void display(int arr[], int size, int index) {
    if (index >= size) {
        printf("\n");
        return;
    }
    printf("%d ", arr[index]);
    display(arr, size, index + 1);  // Recursively display the next element
}

// Function to sort the elements of the array (Selection Sort)
void sort(int arr[], int size) {
    int i, j, minIdx, temp;

    // Use selection sort (modified to avoid a loop in the sort function)
    for (i = 0; i < size - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
    printf("Array sorted successfully!\n");
}

// Function to search for an element in the array using Recursion (Linear Search)
int search(int arr[], int size, int target, int index) {
    if (index >= size) {
        return -1;  // Element not found
    }
    if (arr[index] == target) {
        return index;  // Element found
    }
    return search(arr, size, target, index + 1);  // Recursively search the next element
}
