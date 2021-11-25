#include <stdio.h>

int main() {
     int Graph[4][4]={ {999,   5,  6, 10},
                    {999,  999,  3,  999},
                    {999, 999, 999,   1},
                    {999, 999, 999, 999} };
    int cost[4]={999,999,999,999};
    cost[0]=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(Graph[i][j]+cost[i]<cost[j]){
                cost[j]=Graph[i][j]+cost[i];
            }
        }
    }
    for(int i=0;i<4;i++){
        printf("%d\t",cost[i]);
    }
    return 0;
}