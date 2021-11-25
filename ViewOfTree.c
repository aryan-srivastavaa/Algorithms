//Left View Of Tree
void LeftSide(struct node *root){
    if(root!=NULL){
        printf("%u",root->data);
        if(root->left!=NULL){
            LeftSide(root->left);
        }
        else if(root->left==NULL){
            LeftSide(root->right);
        }
        
    }
}

//Right View of Tree
void RightSide(struct node *root){
    if(root!=NULL){
        printf("%u",root->data);
        if(root->right!=NULL){
            LeftSide(root->right);
        }
        else if(root->right==NULL){
            LeftSide(root->left);
        }
        
    }
}
