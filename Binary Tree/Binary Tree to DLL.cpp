void bToDLLUtil(Node *root, Node **href){
    if(!root){
        return;
    }
    
    bToDLLUtil(root->right, href);
    
    if(*href == NULL){
        *href = root;
    }else{
        (*href)->left = root;
        root->right = *href;
        (*href) = root;
    }
    
    bToDLLUtil(root->left, href);
}

Node * bToDLL(Node *root)
{
    // your code here
    Node *start = NULL;
    Node **href = &start; 
    bToDLLUtil(root, href);
    return start;
}
