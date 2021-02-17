int find(Node *root, int k){
    if(!root){
        return 0;
    }
    
    if(root->data == k){
        return 1;
    }
    
    if(root->data < k){
        return find(root->right, k);
    }
    return find(root->left, k);
}

int countPairs(Node* root1, Node* root2, int x)
{
    // Code here
    if(!root1){
        return 0;
    }
    
    return countPairs(root1->left, root2, x) + countPairs(root1->right, root2,  x) + find(root2, x-root1->data);
}
