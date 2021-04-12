class Solution {
public:
    bool vis[1000000];
    bool recStack[1000000];
    
    bool dfs(int s, vector<int>adj[]){
        vis[s] = true;
        recStack[s] = true;
        
        for(int u: adj[s]){
            if(recStack[u]){
                return true;
            }
            
            if(!vis[u]){
                if(dfs(u, adj)){
                    return true;
                }
            }
        }
        recStack[s] = false;
        return false;
    }

	bool isCyclic(int V, vector<int> adj[]) {
	   	// code here
	   	memset(vis, false, sizeof(vis));
	   	memset(recStack, false, sizeof(recStack));
	   	
	   	for(int i=0; i<V; i++){
	   	    if(dfs(i, adj)){
	   	        return true;
	   	    }
	   	}
	   	return false;
	}
};
