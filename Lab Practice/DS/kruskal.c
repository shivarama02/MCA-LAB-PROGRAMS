#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int adj[MAX][MAX],parent[MAX];
int n;

int find(int vertex){
    if(parent[vertex]!=vertex){
        parent[vertex]=find(parent[vertex]);
    }
    return parent[vertex];
}

int Union(int u, int v){
    int rootU=find(u);
    int rootV=find(v);
    parent[rootV]=rootU;
}

void kruskal(){
    int edge=0,cost=0;
    for(int i=0;i<n;i++){
        parent[i]=i;
    }
    while(edge<n-1){
        int u,v,min=__INT_MAX__;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(adj[i][j]<min){
                    min=adj[i][j];
                    u=i;
                    v=j;
                }
            }
        }
        if(find(u)!=find(v)){
            printf("Edge %d: (%d -> %d) cost: %d\n", edge + 1, u, v, min);
            cost += min;
            Union(u,v);
            edge++;
        }
        adj[u][v]=adj[v][u]=__INT_MAX__;
    }
    printf("Total cost of MST: %d\n", cost);
}

int main(){
    printf("Enter the number vertices: ");
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
    kruskal();
} 
// int main(){
//     printf("Enter the number vertices: ");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("adj[%d][%d]: ",i,j);
//             scanf("%d",&adj[i][j]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",adj[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(adj[i][j]==0){
//                 adj[i][j]=__INT_MAX__;
//             }
//         }
//     }
//     kruskal();
// } 