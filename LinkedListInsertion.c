//Creating a Linked List

#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node * ptr;
} ;



    

 void main(){
     struct node* a;
    struct node* head ;
    struct node* temp;
    struct node* newnode;
    head = temp = NULL;
    int entry;
     printf(" Enter number of nodes you want to create\n");
     scanf("%d",&entry);
     
     
        
    
    for(int i =1;i<=entry;i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data of node:");
        scanf("%d",&newnode->data);
        if(head== NULL){
            head = newnode;
            temp = newnode;
        }
        else{
            temp->ptr = newnode;
            temp = newnode;
            }
           
        }
    for(temp=head;temp!=NULL;temp=temp->ptr){
        printf("%d",temp->data);
    }
    //Insertion at beginning
     newnode = (struct node*)malloc(sizeof(struct node));
      printf("Enter the data of new node:");
     scanf("%d",&newnode->data);
     temp =head;
     int place;
     scanf("%d",&place);
     for(int i = 1;i<place;i++ ){
         temp=temp->ptr;
         
     }
     newnode->ptr = temp->ptr;
    //  temp->ptr->ptr = newnode;
     temp->ptr = newnode;
     
    
    //  printf("%d",head);
    //  head = newnode;
    //  printf("%d",head);
    
    
    for(temp=head;temp!=NULL;temp=temp->ptr){
        printf("%d",temp->data);
    }
    
    
    
    
}