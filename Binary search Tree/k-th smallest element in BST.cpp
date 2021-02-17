int k, ans;
void inorder(Node *root){
    if(!root){
        return;
    }
    inorder(root->left);
    k--;
    if(k == 0){
        ans = root->data;
    }
    inorder(root->right);
}

int KthSmallestElement(Node *root, int K)
{
    //add code here.
    k = K;
    ans = -1;
    inorder(root);
    return ans;
}
