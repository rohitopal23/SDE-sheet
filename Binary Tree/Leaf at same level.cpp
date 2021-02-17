bool flg;

int checkUtil(Node *root){
    if(!root || !flg){
        return 0;
    }
    
    int l = checkUtil(root->left);
    int r = checkUtil(root->right);
    
    if(l>0 && r>0 && l != r){
        flg = false;
    }
    
    return max(l , r)+1;
}

bool check(Node *root)
{
    //Your code here
    flg = true;
    checkUtil(root);
    return flg;
}
