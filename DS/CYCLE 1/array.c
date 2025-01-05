#include<stdio.h>
#define MAX 10             /* array max size*/

int array[MAX], size = -1;

void display();
void insert();
void delete();
void search();

void main(){
    int ch, is_running = 1;

    while(is_running){                                       /*recursive menu*/
        printf("\n1.Insert\n2.Delete\n3.Search\n4.Display\n5.Exit\nEnter your choice: ");       
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            search();
            break;
        case 4:
            display();
            break;
        case 5:
            is_running = 0;
            printf("\n...Exiting...\n");
            break;
        
        default:
            printf("\n!!Invalid Choice!!\n");
            break;
        }
    }

}

void display(){                                  /* Display the array elements */
    if(size == -1){
        printf("\nThe array is empty!!\n");
    }
    else{
        printf("\nThe array elements are: ");

        for(int i=0; i<=size; i++){
            printf("%d ", array[i]);
        }
    }
}

void insert(){                                   /* Inserting array elements*/
    int n;
    printf("\nHow much elements to add ? : ");
    scanf("%d", &n);
    if((n+size+1) > MAX){
        printf("\nNot Enough Space :(\n%d spaces left\n", MAX - size - 1);
    }
    else{
        for(int i=size + 1; i<=size+n; i++){
            printf("Enter array[%d] element: ", i);
            scanf("%d", &array[i]);
        }
        size += n;
    }
}

void search(){                                   /* Searching for an array element*/
    if(size == -1){
        printf("\nThe array is empty!!\n");
    }
    else{
        int tosearch;
        printf("\nEnter the element to search for: ");
        scanf("%d", &tosearch);
        for(int i=0; i<=size; i++){
            if(array[i] == tosearch){
                printf("\n%d found at index %d\n", tosearch, i);
                return;
            }
        }
        printf("\n%d was not found :( \n", tosearch);
    }
}

void delete(){                                      /* Deleting an element from array*/
    if(size == -1){
        printf("\nThe array is empty!!\n");
    }
    else{
        printf("\nEnter the index of the element to be deleted: ");
        int index;
        scanf("%d", &index);
        if(index>size){
            printf("\nThere is no data at that index\n");
        }
        else{
            for(int i=index; i<size; i++){
                array[i] = array[i+1];
            }
            size--;
        }
    }
}