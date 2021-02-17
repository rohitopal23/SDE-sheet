
Node *LCA(Node *root, int a, int b){
    if(!root){
        return NULL;
    }
    
    Node *l, *r;
    
    if(root->data == a || root->data == b){
        return root;
    }
    
    l = LCA(root->left, a, b);
    r = LCA(root->right, a, b);
    
    if(l && r){
        return root;
    }
    
    return (l!=NULL)? l:r;
}

int dist(Node *root, int a){
    if(!root){
        return -1;
    }
    
    if(root->data == a){
        return 0;
    }
    
    int l = dist(root->left, a);
    int r = dist(root->right, a);
    
    if(l>=0 || r>=0){
        return max(l, r)+1;
    }
    return -1;
}
 
   
int findDist(Node* root, int a, int b) {
    // Your code here
    Node *lca = LCA(root, a, b);
    return dist(lca, a)+dist(lca, b);
}
