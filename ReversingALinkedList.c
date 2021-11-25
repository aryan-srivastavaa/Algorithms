//Reversing a Linked List

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* ptr;
};
struct node*head,*temp,*newnode;

int main(){
    head=temp=NULL;
    int n;
    printf("Enter number of nodes you want to Enter:");
    scanf("%d",&n);
    
    
    for(int i = 0;i<n;i++){
     newnode = (struct node*)malloc(sizeof(struct node));
     printf("Enter the data of node:");
     scanf("%d",&newnode->data);
     if(head==NULL){
        head = newnode;
        temp = newnode;
     }
     else{
        temp->ptr = newnode;
        temp=newnode;
     }
     newnode->ptr = NULL;
    }
    
    
    
    for(temp=head;temp!=NULL;temp=temp->ptr){
        printf("%d",temp->data);
    }
    printf("\n");
    
    
    
    //Reversing Code
    struct node *prev, *cur, *next;
    prev = cur =NULL;
    next = head;
    while(next!=NULL){
     if(cur==NULL){
        cur=next;
        next = next->ptr;
        cur->ptr = prev;
        prev = cur;
        
     }
     else{
        cur= next;
        next = next->ptr;
        cur->ptr = prev;
        prev = cur;
     }
     
    }
    head =cur;
    for(temp=head;temp!=NULL;temp=temp->ptr){
        printf("%d",temp->data);
    }
    
}