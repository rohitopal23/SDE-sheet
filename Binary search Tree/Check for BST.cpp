bool check(Node *root, int mini, int maxi){
    if(!root){
        return true;
    }
    
    if(mini < root->data && root->data <= maxi){
        return check(root->left, mini, root->data) && check(root->right, root->data, maxi);
    }
    
    return false;
}

bool isBST(Node* root) {
    // Your code here
    return check(root, INT_MIN, INT_MAX);
}


