vector<int> preOrder(Node *root, map<vector<int>, int>& mp){
    if(!root){
        return {};
    }
    
    vector<int> s;
    s.push_back(root->data);
    
    vector<int> temp= preOrder(root->left, mp);
    
    for(int u: temp){
        s.push_back(u);
    }
    
    vector<int> tmp = preOrder(root->right, mp);
    
    for(int u: tmp){
        s.push_back(u);
    }
    
    //if(s.size()>1)
    mp[s]++;
    return s;
}

map<vector<int>, int> dupSub(Node *root)
{
     //your code here
     map<vector<int>, int> mp;
     preOrder(root, mp);
     
     
     return mp;
}

void printAllDups(Node* root)
{
    // Code here
    map<vector<int>, int> mp = dupSub(root);
    int cnt = 0;
    
    for(auto it: mp){
        if(it.second > 1){
            cnt++;
            cout<<it.first[0]<<" ";
        }
    }
    if(cnt == 0)    cout<<-1;
    
    
}
