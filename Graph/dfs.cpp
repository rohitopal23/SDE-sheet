lass Solution {
public:
    bool vis[1000000];
    void dfs(vector<int> adj[], vector<int>&ans, int s){
        vis[s] = true;
        ans.push_back(s);
        
        for(int u: adj[s]){
            if(!vis[u]){
                dfs(adj, ans, u);
            }
        }
    }

	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    memset(vis, false, sizeof(vis));
	    vector<int> ans;
	    dfs(adj, ans, 0);
	    return ans;
	}
};
