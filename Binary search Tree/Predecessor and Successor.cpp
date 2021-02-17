Node *find(Node *root, int k){
    if(!root){
        return root;
    }
    
    if(root->key == k){
        return root;
    }else if(root->key > k){
        return find(root->left, k);
    }
    return find(root->right, k);
}

void findPreSuc(Node* root, Node*& pre, Node*& suc, int k){

    // Your code goes here
    if(!root){
        return;
    }
    
    if(root->key == k){
        if(root->right){
            suc = root->right;
            while(suc && suc->left) suc = suc->left;
        }
        
        if(root->left){
            pre = root->left;
            while(pre && pre->right) pre = pre->right;
        }
        
        
    }else if(root->key > k){
        suc = root; 
        findPreSuc(root->left, pre, suc, k);
    }else{
        pre = root;
        findPreSuc(root->right, pre, suc, k);
    }
}
