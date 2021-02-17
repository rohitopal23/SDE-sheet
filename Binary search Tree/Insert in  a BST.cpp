void insertUtil(Node *root, int k){
    if(!root){
        return;
    }
    
    if(root->data > k){
        if(!root->left){
            root->left = new Node(k);
        }else{
            insertUtil(root->left, k);
        }
    }else if(root->data < k){
        if(!root->right){
            root->right = new Node(k);
        }else{
            insertUtil(root->right, k);
        }
    }
}

Node* insert(Node* root, int Key)
{
    // Your code here

    insertUtil(root, Key);
    return root;
    
}
