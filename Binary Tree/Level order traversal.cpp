vector<int> levelOrder(Node* node)
{
    //Your code here
    if(!node){
        return {};
    }
    
    queue<Node *> q;
    q.push(node);
    vector<int> ans;
    
    while(!q.empty()){
        Node *a = q.front();
        q.pop();
        
        ans.push_back(a->data);
        
        if(a->left) q.push(a->left);
        if(a->right) q.push(a->right);
    }
    return ans;
}
