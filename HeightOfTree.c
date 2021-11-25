#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node *left;
    struct node *right;
    int data;
}*root, *n1,*n2,*n3, *n4, *n5, *n6;
struct node* createNode(int data){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left =NULL;
    newnode->right =NULL;
    return newnode;
}
int Height(struct node *root){
    
    if(root==NULL){
        return -1;
    }
    else{
       int hl = Height(root->left);
       int hr = Height(root->right);
        if(hl>hr)
        return hl+1;
        else 
        return hr+1;
          
    }
   
}
void levelOrder(struct node *root,int Height){
    // for(int i=0;i<Height+1;i++){
        if(root ==NULL){
            return;
        }
        else if(Height==1)
          {printf("%d\t",root->data);}
        else{
            levelOrder(root->left,Height-1);
            levelOrder(root->right,Height-1);
        }
    // }
}
int main() {
    
    
    root = createNode(1);
    n1 = createNode(2);
    n2 = createNode(3);
    n3 = createNode(4);
    n4 = createNode(5);
    n5 = createNode(6);
    n6 = createNode(7);   
    root->left = n1;
    root->right = n2;
    n1->left =n3;
    n1->right = n4;
    n2->left = n5;
    n5->right = n6;
    
    int a = Height(root);
    // printf("%d\n",a);
    levelOrder(root,a);
   
}