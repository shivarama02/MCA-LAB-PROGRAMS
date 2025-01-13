#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top=NULL, *newnode, *temp;

int insert(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data to push: ");
    scanf("%d",&newnode->data);
    newnode->next=top;
    top=newnode;
    if(top==NULL){
        top=newnode;
    }
    printf("%d is pushed in!",newnode->data);
}

int display(){
    if(top==NULL){
        printf("Stack underflow!");
    }
    else{
        temp=top;
        while(temp!=NULL){
            printf("| %d |\n",temp->data);
            temp=temp->next;
        }
    }
}

int delete(){
    if(top==NULL){
        printf("Stack underflow!");
    }
    else{
        temp=top;
        top=top->next;
        printf("%d is poped out!",temp->data);
        free(temp);
    }
}

int peek(){
    if(top==NULL){
        printf("Stack is empty!");
    }
    else{
        printf("peek element is %d",top->data);
    }
}

int main(){
    int choice;
    while(1){
        printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit\nEnter an option: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid option!");
        }
    }
}