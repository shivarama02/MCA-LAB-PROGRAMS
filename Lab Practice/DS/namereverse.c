// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // Define the Node structure without typedef
// struct Node {
//     char name[50];
//     struct Node* next;
//     struct Node* prev;
// };

// // Function to create a new node
// struct Node* createNode(char* name) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     strcpy(newNode->name, name);
//     newNode->next = NULL;
//     newNode->prev = NULL;
//     return newNode;
// }

// // Function to add a node to the end of the doubly linked list
// void add(struct Node** head, char* name) {
//     struct Node* newNode = createNode(name);
//     if (*head == NULL) {
//         *head = newNode;
//     } else {
//         struct Node* temp = *head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->prev = temp;
//     }
// }

// // Function to display the list in forward order
// void displayForward(struct Node* head) {
//     struct Node* temp = head;
//     while (temp != NULL) {
//         printf("%s ", temp->name);
//         temp = temp->next;
//     }
//     printf("\n");
// }

// // Function to display the list in reverse order
// void displayReverse(struct Node* head) {
//     struct Node* temp = head;
//     if (temp == NULL) return;  // List is empty
//     // Move to the end of the list
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     // Traverse backward
//     while (temp != NULL) {
//         printf("%s ", temp->name);
//         temp = temp->prev;
//     }
//     printf("\n");
// }

// // Main function
// int main() {
//     struct Node* head = NULL;
//     int choice;
//     char name[50];

//     while (1) {
//         printf("\nMenu:\n");
//         printf("1. Insert\n");
//         printf("2. Display\n");
//         printf("3. Reverse Display\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter the student's name: ");
//                 scanf("%s", name);
//                 add(&head, name);
//                 break;
//             case 2:
//                 printf("Names in forward order:\n");
//                 displayForward(head);
//                 break;
//             case 3:
//                 printf("Names in reverse order:\n");
//                 displayReverse(head);
//                 break;
//             case 4:
//                 printf("Exiting program.\n");
//                 return 0;
//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }
//     }

//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    struct node *prev;
    char data[50];
    struct node *next;
};
struct node *head=NULL, *newnode, *temp;

void insert(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the student name: ");
    scanf("%s",newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
}

void displayforward(){
    if(head==NULL){
        printf("\nlist is empty!!\n");
    }
    else{
        temp=head;
        while(temp!=NULL){
            printf("%s -> ",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}

void displayreverse(){
    if(head==NULL){
        printf("\nlist is empty!");
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        while(temp!=NULL){
            printf("%s -> ",temp->data);
            temp=temp->prev;
        }
        printf("NULL\n");
    }
}


void main(){
    int choice;
    while(1){
        printf("\n1.insert\n2.delete\n3.display forward\n4.display reverse\n5.exit\n\nEnter your option: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insert();
                break;
            case 2:
                
                break;
            case 3:
                displayforward();
                break;
            case 4:
                displayreverse();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid option! choose a valid option");
        }
    }
    

}