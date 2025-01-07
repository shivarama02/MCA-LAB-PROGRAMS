#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int arr[MAX];
int size = 0;

void insAtBeg(int value);
void insAtEnd(int value);
void insAtPos(int value, int pos);
void delAtBeg();
void delAtEnd();
void delAtPos(int pos);
void search(int value);
void display();

void insAtBeg(int value) {
    if (size >= MAX) {
        printf("Array is full!\n");
        return;
    }
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    size++;
}

void insAtEnd(int value) {
    if (size >= MAX) {
        printf("Array is full!\n");
        return;
    }
    arr[size] = value;
    size++;
}

void insAtPos(int value, int pos) {
    if (size >= MAX) {
        printf("Array is full!\n");
        return;
    }
    if (pos < 1 || pos > size + 1) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    size++;
}

void delAtBeg() {
    if (size == 0) {
        printf("Array is empty!\n");
        return;
    }
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

void delAtEnd() {
    if (size == 0) {
        printf("Array is empty!\n");
        return;
    }
    size--;
}

void delAtPos(int pos) {
    if (size == 0) {
        printf("Array is empty!\n");
        return;
    }
    if (pos < 1 || pos > size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = pos - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

void search(int value) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            printf("Element %d found at position %d\n", value, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found\n", value);
    }
}

void display() {
    if (size == 0) {
        printf("Array is empty!\n");
        return;
    }
    printf("The elements are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int choice, value, pos;

    while (1) {
        printf("\nArray Operations:");
        printf("\n1. INSERT");
        printf("\n2. DELETE");
        printf("\n3. SEARCH");
        printf("\n4. DISPLAY");
        printf("\n5. EXIT");
        printf("\nChoose an operation: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("\n1. Insert at Beginning\n2. Insert at End\n3. Insert at Position\nChoose an insertion option: ");
                scanf("%d", &choice);
                if (choice == 1) {
                    insAtBeg(value);
                } else if (choice == 2) {
                    insAtEnd(value);
                } else if (choice == 3) {
                    printf("Enter position: ");
                    scanf("%d", &pos);
                    insAtPos(value, pos);
                } else {
                    printf("Invalid insertion option.\n");
                }
                break;

            case 2:
                printf("\n1. Delete at Beginning\n2. Delete at End\n3. Delete at Position\nChoose a deletion option: ");
                scanf("%d", &choice);
                if (choice == 1) {
                    delAtBeg();
                } else if (choice == 2) {
                    delAtEnd();
                } else if (choice == 3) {
                    printf("Enter position: ");
                    scanf("%d", &pos);
                    delAtPos(pos);
                } else {
                    printf("Invalid deletion option.\n");
                }
                break;

            case 3:
                printf("Enter value to search: ");
                scanf("%d", &value);
                search(value);
                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);
                break;

            default:
                printf("Invalid option.\n");
                break;
        }
    }

    return 0;
}
