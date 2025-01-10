#include<stdio.h>

int main(){
    int n1, n2;
    printf("Enter the size of array 1: ");
    scanf("%d",&n1);
    int a[n1];
    
    for(int i=0; i<n1; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the size of array 2: ");
    scanf("%d",&n2);
    int b[n2];

    for(int j=0; j<n2; j++){
        scanf("%d",&b[j]);
    }

    // if(n1!=n2){
    //     printf("arrays should be equal!");
    // }
    // else{
    //     int c[n1+n2], n3=n1+n2;
    //     for(int i=0; i<n1; i++){
    //         c[2*i]=a[i];
    //         c[(2*i)+1]=b[i];
    //     }

    //     for(int i=0; i<n3; i++){
    //         printf("%d",c[i]);
    //     }
    // }
    int n3=n1+n2, c[n3];;
    
    if(n1>n2){
        for(int i=0; i<n2; i++){
            c[2*i]=a[i];
            c[(2*i)+1]=b[i];
        }
        for(int i=n2; i<n1; i++){
            c[2*i]=a[i];
            
        }for(int i=0; i<n3; i++){
            printf("%d",c[i]);
        }
    }
    else if(n1<n2){
        for(int i=0; i<n1; i++){
            c[2*i]=a[i];
            c[(2*i)+1]=b[i];
        }
        for(int i=n1; i<n2; i++){
            c[2*i]=b[i];

        }
        for(int i=0; i<n3; i++){
            printf("%d",c[i]);
        }
    }
    else{
        int c[n1+n2], n3=n1+n2;
        for(int i=0; i<n1; i++){
            c[2*i]=a[i];
            c[(2*i)+1]=b[i];
        }

        for(int i=0; i<n3; i++){
            printf("%d",c[i]);
        }
    }
    
    return 0;
    
}