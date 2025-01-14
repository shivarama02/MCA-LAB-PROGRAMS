#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int queue[MAX],front=-1,rear=-1;

int enqueue(){
    int data;                                           
    printf("Enter the data to insert: ");
    scanf("%d",&data);
    if(rear>=MAX-1){
        printf("Queue is full!");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=data;

    }
    else{
        rear++;
        queue[rear]=data;
    }
}

int dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue is empty!");
    }
    else if(front==rear){
        printf("%d is deleted",queue[front]);
        front=rear=-1;
    }
    else{
        printf("%d is deleted",queue[front]);
        front++;
    }
}

int display(){
    if(front==-1 && rear==-1){
        printf("Queue is empty!");
    }
    else{
        for(int i=front; i<rear+1; i++){
            printf("%d-",queue[i]);
        }
    }
}

int main(){
    int choice;
    while(1){
        printf("\n1.ENQUEUE\n2.DQUEUE\n3.DISPLAY\n4.EXIT\nChoose an option: ");\
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