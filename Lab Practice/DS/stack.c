#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int top=-1, stack[MAX];

int push(){
    int data;
    if(top >= MAX-1){
        printf("\nStack overflow!\n");
    }
    else{
        printf("\nEnter data to push: ");
        scanf("%d",&data);
        top += 1;
        stack[top] = data;
        printf("\n%d is pushed in!\n",data);
    }
}

int pop(){
    int data;
    if(top == -1){
        printf("\nStack underflow!\n");
    }
    else{
        data = stack[top];
        top -= 1;
        printf("\n %d is poped out!\n",data);
    }
}

int peek(){
    if(top == -1){
        printf("\nStack is empty!\n");
    }
    else{
        printf("\nPeek element is %d\n", stack[top]);
    }
}

int display(){
    if(top == -1){
        printf("\nStack is empty!\n");
    }
    else{
        for(int i=top; i>=0; i--){
            printf("| %d |\n", stack[i]);
        }
    }
}

int main(){
    int choice;
    while(1){
        printf("\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\nchoose an option: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
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
                printf("\nInvalid choice!");
                break;
        }
    }
}