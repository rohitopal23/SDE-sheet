void topView(struct Node *root)
{
    //Your code here
    map<int, int>mp;
    queue<pair<Node*, int>> q;
    
    q.push(make_pair(root, 0));
    
    while(!q.empty()){
        pair<Node*, int> cur = q.front();
        q.pop();
        
        if(mp[cur.second] == 0){
            mp[cur.second] = cur.first->data;
        }
        
        if(cur.first->left)    q.push(make_pair(cur.first->left, cur.second-1));
        if(cur.first->right)    q.push(make_pair(cur.first->right, cur.second+1));
    }
    
    for(auto it: mp){
        cout<<it.second<<" ";
    }
    cout<<"\n";
}
