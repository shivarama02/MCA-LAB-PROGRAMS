#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL, *newnode, *temp, *prev=NULL;

struct node* createnode(){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data to insert: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    return newnode;
}

void insatbeg(){
    newnode = createnode();
    newnode->next=head;
    head=newnode;
}

void insatend(){
    newnode = createnode();
    newnode->next=NULL;
    if (head == NULL){
        head=newnode;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next=newnode;
    }
}


void display(){
    temp=head;
    if (temp==NULL){
        printf("\nlist is empty!\n");
    }
    else{
        printf("\n");
        while(temp!=NULL){
            printf("%d ->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int insatpos(){
    int pos,i;
    newnode = createnode();
    printf("enter the position : ");
    scanf("%d",&pos);
    if (pos==1){
        newnode->next=head;
        head=newnode;
    }
    else{
        temp=head;
        for(i=1;i<pos-1 && temp!=NULL;i++){
            temp = temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

void delatbeg(){
    if (head==NULL){
        printf("list is empty!");
    }
    else{
        temp=head;
        head=head->next;
        free(temp);
    }
}

void delatend(){
    if (head==NULL){
        printf("list is empty!");
    }
    else if(head->next==NULL){
        free(head);
        head=NULL;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        free(temp);
        prev->next=NULL;
    }
}

void delatpos(){
    int pos,i;
    if (head==NULL){
        printf("list is empty!");
    }else{
        printf("Enter the position to delete: ");
        scanf("%d",&pos);
        if (pos==1){
            temp=head;
            head=head->next;
            free(temp);
        }
        else{
            temp=head;
            for(i=1;i<pos && temp!=NULL;i++){
                prev=temp;
                temp=temp->next;
            }
            prev->next=temp->next;
            free(temp);
        }
    }
}

void search(){
    int value,pos=1;
    temp=head;
    if(temp==NULL){
        printf("list is empty!");
    }
    printf("Enter the value to search: ");
    scanf("%d",&value);
    while(temp!=NULL){
        if(temp->data==value){
            printf("value %d found at position %d!",value,pos);
            return;
        }
        temp=temp->next;
        pos++;
    }
    printf("value %d not found in the list!",value);
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n1.insatbeg\n2.insatend\n3.insatpos\n4.delatbeg\n5.delatend\n6.delatpos\n7.search\n8.display\n9.exit\nEnter option: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                insatbeg();
                display();
                break;
            case 2:
                insatend();
                display();
                break;
            case 3:
                insatpos();
                display();
                break;
            case 4:
                delatbeg();
                display();
                break;
            case 5:
                delatend();
                display();
                break;
            case 6:
                delatpos();
                display();
                break;
            case 7:
                search();
                break;
            case 8:
                display();
                break;
            case 9:
                exit(1);
                break;
            default:
                printf("\nInvalid option!");
        }
    }
}