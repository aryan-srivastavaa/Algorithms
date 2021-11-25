//Floyf Warshall Algorithm
#include<stdio.h>

int main(){
    int Graph[4][4]={ {0,   5,  999, 10},
                    {999,  0,  3,  999},
                    {999, 999, 0,   1},
                    {999, 999, 999, 0} };
    
    
    
    
    
    int i,j,k;
    for(int i=0;i<4;i++){
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                if(Graph[i][j]>Graph[i][k] + Graph[k][j]){
                    Graph[i][j] = Graph[i][k] + Graph[k][j];
                }
            }
        }
    }
    
    for(int a=0;a<4;a++){
        for(int b=0;b<4;b++){
            printf("%d\t",Graph[a][b]);
        }
        printf("\n");
    }
    return 0;
}