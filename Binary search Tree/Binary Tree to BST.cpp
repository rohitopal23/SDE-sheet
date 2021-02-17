void fill(Node *root, vector<int>& v){
    if(!root){
        return;
    }
    
    fill(root->left, v);
    root->data = v.back();
    v.pop_back();
    fill(root->right, v);
}

void inorder(Node *root, vector<int>&v){
    if(!root){
        return;
        
    }
    
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

Node *binaryTreeToBST (Node *root)
{
    //Your code goes here
    vector<int>v;
    inorder(root, v);
    
    sort(v.begin(), v.end(), greater<int>());
    
    fill(root, v);
    return root;
}
