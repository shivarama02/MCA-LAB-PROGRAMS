#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();

struct node{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL, *current, *newnode, *temp;

int main(){
    int choice;
    while(1){
        printf("\n1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4. EXIT\n\nchoose the operation: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                enqueue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\nchoose a valid operation!");
        }
    }
}

void enqueue(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the element to be inserted: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(front == NULL && rear == NULL){
        front = newnode;
        rear = newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue(){
    if(rear == NULL){
        printf("\nQueue is empty");

    }
    else{
        
        if(front )



        printf("%d is deleted",front->data);
        front = front->next
    }
}

void display(){
    if(front == NULL){
        printf("\nQueue is empty!\n");
    }
    else{
        temp = front;
        while(temp != NULL){
            printf("%d ->", temp->data);
            temp = temp->next;
        }
        printf("NULL");
    }
}