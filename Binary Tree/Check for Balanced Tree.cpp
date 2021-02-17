bool flg;

int isBalancedUtil(Node *root){
    if(!root || !flg){
        return 0;
    }
    
    int l = isBalancedUtil(root->left);
    int r = isBalancedUtil(root->right);
    
    if(abs(l-r)>1){
        flg = false;
    }
    
    return max(l, r)+1;
}


bool isBalanced(Node *root)
{
    //  Your Code here
    flg = true;
    isBalancedUtil(root);
    return flg;
    
}
