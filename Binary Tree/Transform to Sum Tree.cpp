int toSumTreeUtil(Node *root){
    if(!root){
        return 0;
    }
    
    int sum = toSumTreeUtil(root->right) + toSumTreeUtil(root->left) + root->data;
    
    root->data = sum - root->data;
    
    return sum;
}

void toSumTree(Node *node)
{
    // Your code here
    toSumTreeUtil(node);
}


