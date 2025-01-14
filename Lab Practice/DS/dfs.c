#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int adj[MAX][MAX], stack[MAX], visited[MAX];
int i,j,n,start;

int dfs(int start, int n){
    visited[start]=1;
    printf("%d ",start);
    for(i=0;i<n;i++){
        if(adj[start][i]==1 && visited[i]!=1){
            dfs(i,n);
        }
    }
}

int main(){
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    printf("Enter adj matrix value: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("adj[%d][%d]: ",i,j);
            scanf("%d",&adj[i][j]);
        }
    }
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
        printf("DFS visited order: ");
        dfs(start, n);
    }
    return 0;
}