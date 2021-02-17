bool flg;

int isSumTreeUtil(Node *root){
    if(!root){
        return 0;
    }
    
    if(!root->left && !root->right){
        return root->data;
    }
    
    int l = isSumTreeUtil(root->left);
    int r = isSumTreeUtil(root->right);
    
    if(l + r != root->data){
        flg = false;
    }
    return l+r+root->data;
}


bool isSumTree(Node* root)
{
     // Your code here
     flg = true;
     isSumTreeUtil(root);
     return flg;
     
}
