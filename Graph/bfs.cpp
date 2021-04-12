class Solution {
public:
    bool vis[1000000];
    
    void bfs(vector<int> adj[], int s, vector<int>&ans){
        queue<int>q;
        q.push(s);
        vis[s] = true;
        
        while(!q.empty()){
            int u = q.front();
            ans.push_back(u);
            q.pop();
            
            for(int d: adj[u]){
                if(!vis[d]){
                    vis[d] = true;
                    q.push(d);
                }
            }
        }
        
        
    }
    
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    memset(vis, false, sizeof(vis));
	    vector<int> ans;
	    bfs(adj, 0, ans);
	    
	    return ans;
	}
