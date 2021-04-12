lass Solution {
public:
    bool vis[100000];
    bool dfs(int s, vector<int>adj[], int prnt){
        vis[s] = true;
        
        for(int u: adj[s]){
            
            if(!vis[u]){
                if(dfs(u, adj, s)){
                    return true;
                }
            }
            else{
                if(u!=prnt || s == u){
                    return true;
                }
            }
            
            
        }
        return false;
    }

	bool isCycle(int V, vector<int>adj[]){
	    // Code here
	    memset(vis, false, sizeof(vis));
	    
	    for(int i=0; i<V; i++){
	        if(!vis[i]){
	            if(dfs(i, adj, -1)){
	                return true;
	            }
	        }
	    }
	    return false;
	}
};

