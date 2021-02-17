struct node *last;

void inorder(struct node* root){
    if(!root){
        return;
    }
    
    inorder(root->left);
    
    if(last){
        last->next = root;
    }
    last = root;
    inorder(root->right);
}

void populateNext(struct node* p){

// Your code goes here
    last = NULL;
    inorder(p);
    
}
