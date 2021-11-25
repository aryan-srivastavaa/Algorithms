// Binary Tree Using Linked List

#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node* left;
  struct node* right;
};
struct node* newnode;
struct node *root = NULL;
struct node *a1 = NULL;
struct node * a2 = NULL;
struct node * a3 = NULL;
struct node * a4 = NULL;

struct node* createNode(int data){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    return newnode;
}

void preOrder(struct node* root){
    if(root!=NULL){
        printf("%d",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
 
void postOrder(struct node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d",root->data);
    }
}

void inOrder(struct node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d",root->data);
        inOrder(root->right);
        
    }
}

int main(){
    root = createNode(1);
    a1 = createNode(2);
    a2 = createNode(3);
    root->left = a1;
    root->right = a2;
    a3 = createNode(4);
    a4 = createNode(5);
    a1->left = a3;
    a1->right = a4;
    
    
    printf("%d,%d,%d",root->data,root->left->data,root->right->data);
    printf("\n");
    preOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
    inOrder(root);
    
}