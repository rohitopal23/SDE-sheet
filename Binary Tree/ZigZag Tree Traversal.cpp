vector <int> zigZagTraversal(Node* root)
{
	
	queue<Node *> q;
	q.push(root);
	vector<int> ans;
	int l = 0;
	
	while(!q.empty()){
	    int len = q.size();
	    vector<int> level;
	    
	    while(len--){
	        Node *t = q.front();
	        q.pop();
	        
	        level.push_back(t->data);
	        
	        if(t->left) q.push(t->left);
	        if(t->right) q.push(t->right);
	    }
	    
	    if(l%2 == 1){
	        reverse(level.begin(), level.end());
	    }
	    
	    for(int u: level){
	        ans.push_back(u);
	    }
	    l++;
	}
	return ans;
}
