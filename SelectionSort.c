//Selection Sort

#include <stdio.h>
void selectionSort(int* Arr, int n){
    int key,temp,i,j;
    for(i=0;i<n;i++){
        key = Arr[i];
        for(j=i+1;j<n;j++){
        if(key>Arr[j]){
            temp = Arr[j];
            Arr[j] = Arr[i];
            Arr[i] = temp;
            key = temp;
            
        }
        }
    }
}
void main(){
    int Arr[] = {3,2,5,1,8,4,6,9,7};
    int n=9;
    selectionSort(Arr,n);
    for(int a = 0;a<n;a++){
        printf("%d",Arr[a]);
    }
    
}