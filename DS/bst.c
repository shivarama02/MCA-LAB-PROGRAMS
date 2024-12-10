#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
};

struct node *newnode, *root = NULL, *parent, *temp;

void insert(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to be added: ");
    scanf("%d", &newnode->data);
    newnode->lchild = NULL;
    newnode->rchild = NULL;
    if(root == NULL){
        root = newnode;
    }
    else{
        temp = root;
        while(temp!=NULL){
            parent = temp;
            if(temp->data > newnode->data){
                temp = temp->lchild;
            }
            else{
                temp = temp->rchild;
            }
        }
        if(parent->data > newnode->data){
            parent->lchild = newnode;
        }
        else{
            parent->rchild = newnode;
        }
    }
}

void delete(){
    printf("deleted");
}

void inorder(struct node *root){
    if(root == NULL){
        return;
    }
    inorder(root->lchild);
    printf("%d ->",root->data);
    inorder(root->rchild);
}

void postorder(struct node *root){
    if(root == NULL){
        return;
    }
    postorder(root->lchild);
    postorder(root->rchild);
    printf("%d ->",root->data);
}

void preorder(struct node *root){
    if(root == NULL){
        return;
    }
    printf("%d ->",root->data);
    preorder(root->lchild);
    preorder(root->rchild);
}

void display();

void main(){
    while(1){
        int choice;
        printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n\nEnter the choice: ");
        scanf("%d",&choice);
        switch(choice){
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
                printf("\nInvalid choice\n");
        }
    }
}

void display(){
    while(1){
        int choose;
        printf("\n1.IN-ORDER\n2.POST-ORDER\n3.PRE-ORDER\n4.BACK TO MAIN\n\nEnter the choice: ");
        scanf("%d",&choose);
        switch(choose){
            case 1:
                inorder(root);
                break;
            case 2:
                postorder(root);
                break;
            case 3:
                preorder(root);
                break;
            case 4:
                main();
                break;
            default:
                printf("\nInvalid choice\n");
        }
    }
}