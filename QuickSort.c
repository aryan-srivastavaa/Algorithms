// Quick Sort

#include <stdio.h>

int partitionFonc(int* A,int low, int high){
    int pivot = A[low];
    int i = low+1;
    int j = high;
    int temp;
    do{
    while(A[i]<=pivot){
        i++;
    }
    while(A[j]>pivot){
        j--;
    }
    if(i<j){
        temp = A[i];
        A[i] = A[j];
        A[j]=temp;
    }
    }while(i<j);
    temp=A[low];
    A[low]=A[j];
    A[j] =temp;
    return j;
}

void quickSort(int* A, int low, int high){
    int index;
    
    if(low<high){
        index = partitionFonc(A,low,high);
        quickSort(A,low,index-1);
        quickSort(A,index+1,high);
    }
}

int main(){
    int Arr[]={3,2,4,1,5,9,6,7,8};
    int n =9;
    quickSort(Arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d",Arr[i]);
    }
    return 0;
}