#include<stdio.h>
#include<stdlib.h>

void insatbeg();
void insatend();
void insatpos();
void display();
void delete();

struct node{              
    int data;                                                   
    struct node* next;                                               
};            

struct node *head = NULL, *current, *newnode, *temp;


void main(){
    int  choice;
    while(1){
        printf("\n\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            insert();                         
            break;
        case 2:
            delete();                            
            break;
        case 3:
            display();                            
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nChoose a valid operation!");
            break;
        }
    }
}
void insert(){
    int choose;
    while(1){
        printf("\n1.Insert at beginning\n2.Insert at end\n3.Insert at position\n4.Back main menu\n\nChoose an operation: ");
        scanf("%d",&choose);
        switch(choose)
        {
        case 1:
            insatbeg();
            break;
        case 2:
            insatend();
            break;
        case 3:
            insatpos();
            break;
        case 4:
            main();
            break;
        default:
            printf("\nChoose a valid operation!");
            break;
        }
    }
}
void insatbeg(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data to be added: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if(head==NULL){
        head = newnode;
    }
    else{
        newnode->next = head;
        head = newnode;
    }
}

void insatend(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data to be added: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if(head==NULL){
        head = newnode;
    }
    else{
        current = head;
        while(current->next != NULL){
            current = current->next;
        }
        current->next = newnode;
    }
}

void insatpos(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data to be added: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    int pos;
    printf("\nEnter the position: ");
    scanf("%d", &pos);
    if(head==NULL){
        head = newnode;
    }
    else if(pos == 1){                          
        newnode->next = head;
        head = newnode;
    }
    else{
        current = head;
        for(int i=2; i<pos; i++){                  
            if(current->next == NULL){                
                break;
            }
            current = current->next;
        }
        if(current->next == NULL){
            current->next = newnode;
        }
        else{
            newnode->next = current->next;
            current->next = newnode;
        }
    }
}

void display(){
    if(head == NULL){
        printf("\n!!There are no nodes to display!!\n");
    }
    else{
        current = head;
        while(current!=NULL){
            printf("%d -> ", current->data);
            current = current->next;
        }
    }
    printf("NULL");
}

void delete(){
    if(head == NULL){
        printf("\n!!There are no nodes to delete!!\n");
    }
    else{
        int pos;
        current = head;
        printf("\nEnter the position: ");
        scanf("%d", &pos);
        if(pos == 1){
            head = head->next;
            free(current);
        }
        else{
            for(int i=2; i<pos; i++){
                if(current->next == NULL){
                    break;
                }
                current = current->next;
            }
            if(current->next == NULL){
                printf("\n!!There was no node to delete at the position!!\n");
            }
            else{                         
                temp = current->next;
                current->next = current->next->next;
                free(temp);
            }
        }
    }
}