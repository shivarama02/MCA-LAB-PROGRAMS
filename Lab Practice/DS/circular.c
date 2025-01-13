#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int queue[MAX],front=-1,rear=-1;

int enqueue(){
    int data;
    printf("Enter the data to insert: ");
    scanf("%d",&data);
    if(((rear+1)%MAX)==front){
        printf("Queue is full!");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=data;

    }
    else{
        rear=(rear+1)%MAX;
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
        front=(front+1)%MAX;
    }
}

int display(){
    if(front==-1 && rear==-1){
        printf("Queue is empty!");
    }
    else{
        int i=front;
        while(i!=rear){
            printf("%d-",queue[i]);
            i=(i+1)%MAX;
        }
        printf("%d",queue[rear]);
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