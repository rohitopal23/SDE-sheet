vector <int> bottomView(Node *root)
{
   // Your Code Here
    if(!root){
        return {};
    }
   
   map<int, int>mp;
    queue<pair<Node*, int>> q;
    
    q.push(make_pair(root, 0));
    
    while(!q.empty()){
        pair<Node*, int> cur = q.front();
        q.pop();
        
         mp[cur.second] = cur.first->data;
        
        
        if(cur.first->left)    q.push(make_pair(cur.first->left, cur.second-1));
        if(cur.first->right)    q.push(make_pair(cur.first->right, cur.second+1));
    }
    
    vector<int> ans;
    for(auto it: mp){
        ans.push_back(it.second);
    }
    return ans;
}
