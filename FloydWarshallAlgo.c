//Floyd Warshall Algorithm

#include <stdio.h>
#include <stdlib.h>

struct Graph{
    int V;
    int E;
    int* Adj;
};
struct Graph* floydWarshall(struct Graph* G){
    int i,j,k;
    int matrix[4][4] = {{0,5,999,10},{999,0,3,999},{999,999,0,1},{999,999,999,0}};
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d\t",matrix[i][j]);
        }
    }
    printf("\n");
    
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            *(G->Adj+4*i+j) = matrix[i][j];
        }
    }
    for(k=0;k<4;k++){
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(matrix[i][k]+matrix[k][j] < matrix[i][j]){
                      matrix[i][j] =matrix[i][k]+matrix[k][j];
                }
            }
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            *(G->Adj+4*i+j) = matrix[i][j]  ;
        }
    }
    return G;
}
int main(){
    int i,j,k;
    struct Graph* G;
    G = (struct Graph*)malloc(sizeof(struct Graph));
    int arr[4][4];
    G->V=4;
    G->E=4;
    G->Adj = malloc(G->V*G->V*sizeof(int));
    
    for(i=0;i<G->V;i++){
        for(j=0;j<G->V;j++){
             *(G->Adj+4*i+j) = 0;
        }
    }
    
    
    //Code for Printing Matrix
    for(i=0;i<G->V;i++){
        for(j=0;j<G->V;j++){
            printf("%d\t",*(G->Adj+4*i+j));
        }
    }
    printf("\n");
    struct Graph* U=floydWarshall(G);
    for(i=0;i<U->V;i++){
        for(j=0;j<U->V;j++){
            printf("%d\t",*(U->Adj+4*i+j));
        }
    }
   
    
    
    return 0;
}