void add(Node *root, int k){
    if(!root){
        return;
    }
    
    if(root->data < k){
        if(!root->right){
            root->right = new Node();
            root->right->data = k;
            root->right->left = root->right->right = NULL;
        }else{
            add(root->right, k);
        }
    }else{
        if(!root->left){
            root->left = new Node();
            root->left->data = k;
            root->left->left = root->left->right = NULL;
            
        }else{
            add(root->left, k);
        }
    }
}

Node* constructTree(int pre[], int size) {
    //code here
    Node *root = new Node();
    root->data = pre[0];
    
    root->left=root->right=NULL;
    
    for(int i=1; i<size; i++){
        add(root, pre[i]);
    }
    
    return root;
}
