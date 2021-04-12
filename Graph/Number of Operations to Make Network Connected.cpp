class Solution {
public:
    bool vis[100001];
    int vCount;
    
    int eCount(int s, vector<int>adj[]){
        vis[s] = true;
        vCount++;
        
        int ans =1 ;
        for(int u: adj[s]){
            if(!vis[u]){
                ans += eCount(u, adj);
            }else{
                ans++;
            }
        }
        return ans;
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        memset(vis, false, sizeof(vis));
        vector<int> adj[100001];
        
        for(int i=0; i<connections.size(); i++){
            int x = connections[i][0], y = connections[i][1];
            
            adj[x].push_back(y);
            adj[y].push_back(x);
            
        }
        
        int cnt=0;
        int chances=0;
        
        for(int i=0; i<n; i++){
            if(!vis[i]){
                vCount = 0;
                cnt++;
                int ecnt = eCount(i, adj)/2; 
                
                cout<<vCount<<" "<<ecnt<<"\n";
                
                chances += (ecnt - (vCount-1));
            }
        }
        
        if(chances >= cnt-1){
            return cnt-1;
        }
        return -1;
    }
};
