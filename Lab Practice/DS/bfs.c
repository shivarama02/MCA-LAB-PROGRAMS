#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int adj[MAX][MAX], queue[MAX], visited[MAX];
int start,n,i,j;
int front =-1, rear= -1;

int enqueue(int start){
    if(rear>=MAX-1){
        return -1;
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=start;
    }
    else{
        rear++;
        queue[rear]=start;
    }
}

int dequeue(){
    int node = queue[front];
    if(front==-1 && rear==-1){
        return -1;
    }
    else if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front++;
    }
    return node;
}

int bfs(int start, int n){
    enqueue(start);
    visited[start]=1;
    printf("%d\t",start);
    while(front!=-1 && rear!=-1){
        int node=dequeue();
        if(node == -1) continue;
        for(i=0;i<n;i++){
            if(adj[node][i]==1 && visited[i]!=1){
                enqueue(i);
                visited[i]=1;
                printf("\n%d-%d\n",node,i);
            }
        }
    }
}


int main(){
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    printf("Enter adj matrix valus: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("adj[%d][%d]: ",i,j);
            scanf("%d",&adj[i][j]);
        }
    }
    printf("the adjacency matrix: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }
    printf("Enter the starting vertex: ");
    scanf("%d",&start);
    if(start<0 || start>n-1){
        printf("Invalid starting vertex!");
    }
    else{
        printf("BFS visited order: \n");
        bfs(start, n);
    }
    return 0;
}
int main(){
    printf("Enter the number vertices: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("adj[%d][%d]: ",i,j);
            scanf("%d",&adj[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(adj[i][j]==0){
                adj[i][j]=__INT_MAX__;
            }
        }
    }
    kruskal();
} 