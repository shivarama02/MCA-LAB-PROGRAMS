#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head=NULL, *head1 = NULL, *head2 = NULL, *temp, *newnode, *newnode1, *list1, *list2;

// Function to create a new node
struct node* createNode() {
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data to insert: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    return newnode;
}

// Function to insert a node at the end of the list
void insert() {
    newnode1 = createNode();
    if (head == NULL) {
        head = newnode1;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode1;
    }
    printf("Node inserted successfully.\n");
}

// Function to display the linked list
void display() {
    if (head == NULL) {
        printf("List is empty.\n");
    } else {
        temp = head;
        printf("List elements: ");
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

// Function to merge two sorted linked lists
struct node* mergeLists(struct node *list1, struct node *list2) {
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    if (list1->data <= list2->data) {
        list1->next = mergeLists(list1->next, list2);
        return list1;
    } else {
        list2->next = mergeLists(list1, list2->next);
        return list2;
    }
}

// Main function
int main() {
    int choice, listChoice;
    struct node *mergedList;

    while (1) {
        printf("\n1. Insert into List 1\n2. Insert into List 2\n3. Display List 1\n4. Display List 2\n5. Merge Lists\n6. Display Merged List\n7. Exit\nEnter option: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert(&head1);
                break;
            case 2:
                insert(&head2);
                break;
            case 3:
                display(head1);
                break;
            case 4:
                display(head2);
                break;
            case 5:
                mergedList = mergeLists(head1, head2);
                printf("Lists merged successfully.\n");
                break;
            case 6:
                display(mergedList);
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid option!\n");
                break;
        }
    }
    return 0;
}
