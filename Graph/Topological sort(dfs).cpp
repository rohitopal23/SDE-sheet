lass Solution{
	public:
	
	bool vis[10001];
	
	void dfs(int s, vector<int>adj[], vector<int>&ans){
	    vis[s] = true;
	    
	    
	    for(int u: adj[s]){
	        if(!vis[u]){
	            dfs(u, adj, ans);
	        }
	    }
	    
	    ans.push_back(s);
	}
	
	vector<int> topoSort(int V, vector<int> adj[]) {
	    // code here
	    memset(vis, false, sizeof(vis));
	    vector<int>ans;
	    
	    for(int i=0; i<V; i++){
	        if(!vis[i]){
	            dfs(i, adj, ans);
	        }
	    }
	    //reverse(ans.begin(), ans.end()); //for getting WA this was required.
	    for(int u: ans){
	        cout<<u<<" ";
	    }
	    cout<<'\n';
	    return ans;
	}
};
