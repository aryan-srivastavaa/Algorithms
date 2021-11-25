//Bubble Sort
#include <stdio.h>
void bubbleSort(int *arr, int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[]={8,5,4,1,6,9,7};
    for(int i=0;i<7;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    bubbleSort(arr,7);
    for(int i=0;i<7;i++){
        printf("%d",arr[i]);
    }
    
}