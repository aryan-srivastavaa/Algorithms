//Stack using Array
#include <stdio.h>
#define N 10
int pt = -1;
void push(int *arr,int data){
    if(pt>=N){
        printf("Stack is full");
    }
    else{
        pt++;
        *(arr+pt) = data;
        
    }
}
void pop(int *arr){
    if(pt<=-1){
        printf("Stack is empty");
    }
    else{
        *(arr+pt)=0;
        pt--;
        
    }
}
int main() {
    int arr[N];
    for(int i=0;i<N;i++){
        arr[i]=0;
    }
    push(arr,5);
    push(arr,5);
    push(arr,5);
    push(arr,5);
    pop(arr);
    pop(arr);
    for(int i=0;i<N;i++){
        printf("%d\t",arr[i]);
    }
}