#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
};

struct node *root=NULL, *newnode, *temp, *parent;

struct node* insert(){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data to be added: ");
    scanf("%d",&newnode->data);
    newnode->lchild=NULL;
    newnode->rchild=NULL;
    if (root == NULL){
        root = newnode;
    }
    else{
        temp=root;
        while(temp!=NULL){
            parent=temp;
            if(temp->data > newnode->data){
                temp=temp->lchild;
            }
            else{
                temp=temp->rchild;
            }
        }
        if(parent->data > newnode->data){
            parent->lchild=newnode;
        }
        else{
            parent->rchild=newnode;
        }
    }
}

struct node* successor(struct node* root){
    while(root->rchild!=NULL){
        root=root->rchild;
    }
    return root;
}

struct node* delete(struct node* root , int value){
    if(root == NULL){
        printf("%d is not found in the tree.\n",value);
        return root;
    }
    else if(value<root->data){
        root->lchild=delete(root->lchild, value);
    }
    else if(value>root->data){

        root->rchild=delete(root->rchild,value);
    }
    else{
        if(root->lchild==NULL && root->rchild==NULL){
            free(root);
            return NULL;
        }
        else if(root->lchild==NULL){
            temp=root->rchild;
            free(root);
            return temp;
        } 
        else if (root->rchild==NULL){
            temp=root->lchild;
            free(root);
            return temp;
        }
        else{
            temp=successor(root->rchild);
            root->data=temp->data;
            root->rchild = delete(root->rchild,temp->data);
        }
    }
    printf("%d is deleted.\n",value);
    return root;

}

void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    printf("%d->",root->data);
    preorder(root->lchild);
    preorder(root->rchild);
}
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->lchild);
    printf("%d->",root->data);
    inorder(root->rchild);
}
void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    postorder(root->lchild);
    postorder(root->rchild);
    printf("%d->",root->data);
}


int main(){
    int choice,value;
    while(1){
        printf("\n1.insert\n2.delete\n3.pre-order\n4.in-order\n5.post-order\n6.exit\nenter option: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insert();
                break;
            case 2:
                printf("Enter the data to delete: ");
                scanf("%d",&value);
                delete(root,value);
                break;
            case 3:
                preorder(root);
                break;
            case 4:
                inorder(root);
                break;
            case 5:
                postorder(root);
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Invalid option!");
        }
    }
}