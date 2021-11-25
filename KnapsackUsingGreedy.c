//Knapsack Problem using Greedy Method
#include<stdio.h>
float knapsack(float *profit,float *weight, int max , int n){
    int index;
    float maxWeight = max;
    float Profit=0;
    
    float profitIsToWeight[n];
    for(int l=0;l<n;l++){
        profitIsToWeight[l] = profit[l]/weight[l];
    }
    
   
    
    float prevWeight;
    while(maxWeight>=0){
        float maxi = profitIsToWeight[0];
        index=0;
        for(int k=0;k<n;k++){
            if(profitIsToWeight[k]>maxi){
                maxi = profitIsToWeight[k];
                index = k;
            }
        }
        prevWeight=maxWeight;
        maxWeight = maxWeight - weight[index];
        if(maxWeight >=0){ 
        Profit = Profit+ profit[index];
        profitIsToWeight[index]=0.000000;
        // printf("%f  %f  %f  %d",maxWeight,Profit,profitIsToWeight[index],index);
        //  printf("\n");
        
        }
       
    }
    // printf("Index value is %d  %f\n",index,prevWeight);
    float extraa = prevWeight / weight[index];
  
    float extra = profit[index] * extraa;
   
    Profit = Profit + extra ;
    
}

int main(){
    int n=7;
    float Profit[] =  {10,5,15,7,6,18,3};
    float Weight[] = {2,3,5,7,1,4,1};
    int maxWeight = 15;
    float ans = knapsack(Profit,Weight,maxWeight,n);
    printf("%f",ans);
    return 0;
}