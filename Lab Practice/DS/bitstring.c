#include<stdio.h>
#include<stdlib.h>

int u[10],n;

int ispresent(int a[], int item, int size){
    for(int i=0;i<size;i++){
        if(item==a[i]){
            return 1;
        }
    }
    return 0;
}

void readset(int a[],int size){
    int value;
    if(a==NULL){
        for(int i=0;i<size;i++){
            printf("Enter elemet %d: ",i+1);
            scanf("%d",&value);
            if(!ispresent(u,value,n)){
                u[i]=value;
            }else{
                i--;
            }
        }
    }
    else{
        for(int i=0;i<size;i++){
            printf("Enter elemet %d: ",i+1);
            scanf("%d",&value);
            if(ispresent(u,value,n) && !ispresent(a,value,size)){
                a[i]=value;
            }else{
                i--;
            }
        }
    }
}

void display(int a[], int size){
    for(int i=0;i<size;i++){
        printf("%d - ",a[i]);
    }
    printf("\n");
}

int main(){
    printf("Enter the universal set size: ");
    scanf("%d",&n);
    readset(NULL,n);
    display(u,n);

    int n1,s1[10];
    printf("Enter the set size: ");
    scanf("%d",&n1);
    readset(s1,n1);
    display(s1,n1);

    int n2,s2[10];
    printf("Enter the set2 size: ");
    scanf("%d",&n2);
    readset(s2,n2);
    display(s2,n2);

    int b1[n],b2[n],value;
    for(int i=0;i<n;i++){
        value=u[i];
        if(ispresent(s1,value,n1)){
            b1[i]=1;
        }
        else{
            b1[i]=0;
        }
    }
    for(int i=0;i<n;i++){
        value=u[i];
        if(ispresent(s2,value,n2)){
            b2[i]=1;
        }
        else{
            b2[i]=0;
        }
    }
    printf("\nb1: ");
    display(b1,n);
    printf("\nb2: ");
    display(b2,n);

    printf("\nUNION: ");
    for(int i=0;i<n;i++){
        if(b1[i]==1 || b2[i]==1){
            printf("1 - ");
        }
        else{
            printf("0 - ");
        }
    }
    printf("\nINTERSECTION: ");
    for(int i=0;i<n;i++){
        if(b1[i]==1 && b2[i]==1){
            printf("1 - ");
        }
        else{
            printf("0 - ");
        }
    }
}