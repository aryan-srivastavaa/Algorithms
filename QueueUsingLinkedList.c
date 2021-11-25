//Queue using Linked List
#include <stdio.h>
#include <stdlib.h>
int front = -1;
int rear = -1;

struct node{
    int data;
    struct node *ptr;
};
struct node *head =NULL;
struct node *temp = NULL;
 void enqueue(int data){
     if(front==-1){
         front++;
         struct node *newnode = (struct node*)malloc(sizeof(struct node));
         newnode->data = data;
         newnode->ptr = NULL;
         head=newnode;
         temp=newnode;
     }
     else{
         front++;
         struct node *newnode = (struct node*)malloc(sizeof(struct node));
         newnode->data = data;
         newnode->ptr = NULL;
         temp->ptr = newnode;
         temp = temp->ptr;
         
     }
     
 }
 void dequeue(){
     if(rear<=front){
         rear++;
     head=head->ptr;
         
     }
     else{
         printf("No items left to delete");
         return;
     }
     
     
 }
 int main(){
     enqueue(1);
     enqueue(2);
     enqueue(3);
     enqueue(4);
     enqueue(5);
     enqueue(6);
     enqueue(7);
     dequeue();
     dequeue();
     dequeue();
     dequeue();
     
     
     for(temp=head;temp!=NULL ;temp=temp->ptr){
         printf("%d\t",temp->data);
     }
     
 }