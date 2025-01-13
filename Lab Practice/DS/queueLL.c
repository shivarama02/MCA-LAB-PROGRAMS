#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front=NULL, *rear=NULL, *newnode, *temp;

int enqueue(){
    struct node *current=front;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data to insert: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(front==NULL && rear==NULL){
        front=newnode;
        rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
    printf("Element %d is eequeued!",newnode->data);
}

int dequeue(){
    if(front==NULL){
        printf("Queue is empty!");
    }
    else{
        temp=front;
        printf("Element %d is dequeued!",front->data);
        if(front==rear){
            front=rear=NULL;
        }
        else{
            front=temp->next;
        }
        free(temp);
    } 
}

int display(){
    if(front==NULL){
        printf("Queue is empty!");
    }
    else{
        temp=front;
        while(temp!=NULL){
            printf("<-%d",temp->data);
            temp=temp->next;
        }
    }
}

int main(){
    int choice;
    while(1){
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\nEnter the option: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid option!");
        }
    }
}