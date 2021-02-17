int k, ans;

void reverseInorder(Node *root){
    if(!root){
        return;
    }
    
    reverseInorder(root->right);
    k--;
    if(k == 0){
        ans = root->data;
    }
    reverseInorder(root->left);
}

int kthLargest(Node *root, int K)
{
    //Your code here
    k = K;
    reverseInorder(root);
    return ans;
}
