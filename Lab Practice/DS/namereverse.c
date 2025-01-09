#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Node structure without typedef
struct Node {
    char name[50];
    struct Node* next;
    struct Node* prev;
};

// Function to create a new node
struct Node* createNode(char* name) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->name, name);
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to add a node to the end of the doubly linked list
void add(struct Node** head, char* name) {
    struct Node* newNode = createNode(name);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

// Function to display the list in forward order
void displayForward(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%s ", temp->name);
        temp = temp->next;
    }
    printf("\n");
}

// Function to display the list in reverse order
void displayReverse(struct Node* head) {
    struct Node* temp = head;
    if (temp == NULL) return;  // List is empty
    // Move to the end of the list
    while (temp->next != NULL) {
        temp = temp->next;
    }
    // Traverse backward
    while (temp != NULL) {
        printf("%s ", temp->name);
        temp = temp->prev;
    }
    printf("\n");
}

// Main function
int main() {
    struct Node* head = NULL;
    int choice;
    char name[50];

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Reverse Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the student's name: ");
                scanf("%s", name);
                add(&head, name);
                break;
            case 2:
                printf("Names in forward order:\n");
                displayForward(head);
                break;
            case 3:
                printf("Names in reverse order:\n");
                displayReverse(head);
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
