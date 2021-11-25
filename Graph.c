#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct Graph{
int V;
int E;
int **ptr;
};
struct Graph* CreateGraph(int Vertices, int Edges){
struct Graph *G = (struct Graph*)malloc(sizeof(struct Graph));
G->V =  Vertices;
G->E = Edges;
int no = (G->V) * (G->V);
G->ptr = (int**)malloc(no * sizeof(int));
for(int i=0;i<G->V;i++){
    for(int j=0;j<G->V;j++){
        printf("Enter Edge length bw nodes:");
        scanf("%d",&*(G->ptr+G->V*i+j));
        printf("%d",*(G->ptr+G->V*i+j));
    }
}
return G;
}
int main(){
    struct Graph* A = CreateGraph(3,3);
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",*(A->ptr+3*i+j));
    }
    printf("\n");
}
    return 0;
}