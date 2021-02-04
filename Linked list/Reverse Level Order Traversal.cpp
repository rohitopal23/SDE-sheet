
int maxDepth;
vector<int> store[10001];


void postOrder(Node *root, int level){
    if(!root){
        return;
    }
    
    postOrder(root->left, level+1);
    postOrder(root->right, level+1);
    
    maxDepth = max(maxDepth, level);
    
    store[level].push_back(root->data);
}

vector<int> reverseLevelOrder(Node *root)
{
    // code here
    maxDepth = 0;
    
    for(int i=0; i<10001; i++){
        store[i].clear();
    }
    
    postOrder(root, 0);
    
    vector<int> ans;
    
    for(int i=maxDepth; i>=0; i--){
        for(int u: store[i]){
            ans.push_back(u);
        }
    }
    
    return ans;
}
