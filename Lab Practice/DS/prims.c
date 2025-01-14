#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int adj[MAX][MAX], visited[MAX];
int n;

void prims(){
    int edge=0,cost=0;
    visited[0]=1;
    while(edge<n-1){
        int u=-1,v=-1,min=__INT_MAX__;
        for(int i=0;i<n;i++){
            if(visited[i]==1){
                for(int j=0;j<n;j++){
                    if(adj[i][j]<min && visited[j]!=1){
                        min=adj[i][j];
                        u=i;
                        v=j;
                    }
                }
            }
        }
        if(u!=-1 && v!=-1){
            visited[v]=1;
            printf("Edge %d: (%d -> %d) cost: %d\n", edge + 1, u, v, min);
            cost+=min;
            edge++;
        }
    }
    printf("Total cost of MST: %d\n", cost);
}

int main(){
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("adj[%d][%d]: ",i,j);
            scanf("%d",&adj[i][j]);
            if(adj[i][j]==0){
                adj[i][j]=__INT_MAX__;
            }
        }
    }
    prims();
}