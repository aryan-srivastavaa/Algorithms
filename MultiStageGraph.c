//MultiStage Graph using Dynamic Programming
#include<stdio.h>
int vertices = 8;

int main(){
    int graph[8][8]={{999, 1, 2, 5, 999, 999, 999, 999},
       {999, 999, 999, 999, 4, 11, 999, 999},
       {999, 999, 999, 999, 9, 5, 16, 999},
       {999, 999, 999, 999, 999, 999, 2, 999},
       {999, 999, 999, 999, 999, 999, 999, 18},
       {999, 999, 999, 999, 999, 999, 999, 13},
       {999, 999, 999, 999, 999, 999, 999, 2},
      {999, 999, 999, 999, 999, 999, 999, 999}};
    int cost[8];
    int via[8];
    int v[8];
    int i,j,k,l,min;
    cost[vertices-1] =0;
    via[vertices-1]=vertices-1;
    v[vertices-1] = vertices-1;
    
       
        for(j=6;j>=0;j--){
            min=999;
            //for assigning cost of nodes directly attached to terminal node
            if(graph[j][7]!=999){
                cost[j]=graph[j][7];
                v[j]=j;
                via[j]=7;
            } 
            else{
                for(k=j+1;k<vertices-1;k++){
                    if(graph[j][k]!=999 && (graph[j][k]+cost[k]<min)){
                        min=graph[j][k]+cost[k];
                        l=k;
                    }
                }
                cost[j]=min;
                v[j]=j;
                via[j]=l;
            }
        }
    for(int a=0;a<vertices;a++){
        printf("cost:%d\t",cost[a]);
        printf("v:%d\n",v[a]);
    }
    
    return 0;
}