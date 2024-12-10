#include<stdio.h>
#include<stdlib.h>

void insatbeg();

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *newnode, *current, *head = NULL, *tail = NULL, *temp;

void main(){
    int choice;
    while(1){
        printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
        scanf("%d"&choice);
        switch(choice){
            case 1:
                insatbeg();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Choose a valid operation!");
        }
    }
}

void insatbeg(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element to be added: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    head = newnode;
    tail = newnode;
    if(head == NULL && tail ==NULL){
        
    }
}