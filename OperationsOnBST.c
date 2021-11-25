// Searching in BST

#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node* left;
  struct node* right;
};

struct node *root, *a1, *a2, *a3, *a4, *a5, *a6;

struct node* createNode(int data){
    struct node* newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct node* SearchBST(struct node* root, int nodeData){
    if(root == NULL){
        printf("No such Data Found");
        return 0;
        
    }
     if(nodeData == (root->data)){
         printf("%d",root);
        return root;
     }
     
     else if(nodeData > (root->data)){
        SearchBST(root->right,nodeData);
        
     }
     else if(nodeData < (root->data)){
        SearchBST(root->left, nodeData);
     }
     
}

void Insert(struct node* root, int key){
    struct node* temp =root;
    
   while(temp->left!=NULL ||temp->right!=NULL){
       
       if(temp->data == key){
           printf("No duplicate nodes can be Inserted");
           return 0;
       }
       else if(temp->data > key ){
           temp = temp->left;
       }
       else if(temp->data< key){
           temp = temp->right;
       }
   }
   
   struct node *newnode = createNode(key);
   
   
   if(key > temp->data){
       
       temp->right = newnode;
   }
   else{
      
       temp->left = newnode;
       
   }
}



int main(){
    root = createNode(50);
    a1 = createNode(40);
    a2 = createNode(20);
    a3 = createNode(45);
    a4 = createNode(60);
    a5 = createNode(55);
    a6 = createNode(70);
    root->left = a1;
    root->right = a4;
    a1->left = a2;
    a1->right = a3;
    a4->left = a5;
    a4->right = a6;
    printf("%d,%d,%d,%d,%d,%d,%d \n",root->data,a1->data,a2->data,a3->data,a4->data,a5->data,a6->data);
    SearchBST(root,145);
    printf("\n");
    printf("%d",a2->left);
    Insert(root, 15);
    printf("%d",root->left->left->left->data);
    
    
}