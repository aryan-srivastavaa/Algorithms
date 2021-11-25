//Queue Using Array
#include <stdio.h>
#include <stdlib.h>
#define N 10
int front = -1;
int rear = -1;

void insert(int data,int *arr){
    if(front>=N){
        printf("Queue is full");
        return;
    }
    else{
        front++;
        *(arr+front)=data;
    }
}
void dequeue(int *arr){
    
    if(rear>=N){
        printf("No items remaining to delete");
    }
    else{
        rear++;
        
        
    }
    
}
int main() {
   int arr[N];
   for(int i =0;i<N;i++){
       arr[i] = 0;
   }
   insert(1,arr);
   insert(2,arr);
   insert(3,arr);
   insert(4,arr);
   insert(5,arr);
   insert(6,arr);
   insert(7,arr);
   insert(8,arr);
   insert(9,arr);
  insert(10,arr);
//   insert(11,arr);
//   insert(12,arr);
//   insert(13,arr);
  dequeue(arr);
  dequeue(arr);
  dequeue(arr);
  dequeue(arr);
   
   
   for(int i =rear+1;i<N;i++){
       printf("%d\t",arr[i]);
   }
   
}