int maxDiameter;

int diameterUtil(Node *root){
    if(!root){
        return 0;
    }
    
    int left = diameterUtil(root->left);
    int right = diameterUtil(root->right);
    
    maxDiameter = max(maxDiameter, left+right+1);
    
    return max(left, right)+1;
}

int diameter(Node* root) {
    // Your code here
    maxDiameter = 0;
    
    diameterUtil(root);
    
    return maxDiameter;
}
