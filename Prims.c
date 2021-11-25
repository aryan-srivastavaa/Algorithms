//Prims Algo for non-directed graphs
#include <stdio.h>
int vertices = 4;
int prims(int G[vertices][vertices],int vertices){
    int min,cost=0,i,j,a,b;
    int number=1;
    int visited[10]={0};
    visited[1]=1;
    while(number<vertices){
        
        
        for(i=0;i<vertices;i++){
            min=999;
            for(j=0;j<vertices;j++){
                if(G[i][j]<min){
                    if(visited[i]!=0){
                        min=G[i][j];
                        a=i;
                        b=j;
                    }
                    if(visited[a]==0 || visited[b]==0){
                        cost = cost+min;
                        visited[b]=1;
                        number++;
                    }
                    G[a][b] = G[b][a]=999;
                }
            }
        }
    }
    return cost;
}

int main(){
    
    int Graph[vertices][vertices];
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            printf("Enter the edge weight:");
            scanf("%d",&Graph[i][j]);
        }
    }
    int ans = prims(Graph,vertices);
    printf("answer is : %d",ans);
}