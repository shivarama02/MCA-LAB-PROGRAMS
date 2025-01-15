#include <stdio.h>



int main() {
    int n1, n2;

    printf("Enter size of arr1: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter values of arr1:\n");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter size of arr2: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter values of arr2:\n");
    for(int j=0;j<n2;j++){
        scanf("%d",&arr2[j]);
    }

    int n3=n1+n2;
    int merged[n3];
    for(int i=0;i<n1;i++){
        merged[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        merged[n1+i]=arr2[i];
    }
    printf("Merged array:\n");
    for (int i = 0; i < (n3); i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");


    int revmerged[n3];
    for(int i=0;i<n1;i++){
        revmerged[i]=arr1[i];
    }

    for(int i=0;i<n2;i++){
        revmerged[n1+i]=arr2[n2-1-i];
    }
    printf("Reverse Merged array:\n");
    for (int i = 0; i < (n3); i++) {
        printf("%d ", revmerged[i]);
    }
    printf("\n");

    printf("Size of merged array: %d\n", n3);

    return 0;
}
