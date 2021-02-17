bool check(Node *root, int mini, int maxi){
    if(!root){
        return false;
    }
    
    if(mini == maxi && maxi == root->data){
        return true;
    }
    
    return check(root->left, mini, root->data-1) || check(root->right, root->data+1, maxi);
}

bool isDeadEnd(Node *root)
{
    //Your code here
    return check(root, 1, INT_MAX);
}
