lass Solution {
public:
    int color[1000001] = {0};
    
    bool bfs(int V, vector<int>adj[]){
        queue<int>q;
	    
	    
	    q.push(V);
	    color[V] = 1;
	    
	    while(!q.empty()){
	        int u = q.front();
	        q.pop();
	        
	        for(int v: adj[u]){
	            if(color[u] == color[v]){
	                return false;
	            }
	            
	            if(color[v] == 0){
	                if(color[u] == 1){
	                    color[v] = 2;
	                }else{
	                    color[v] = 1;
	                }
	                q.push(v);
	            }
	        }
	    }
	    return true;
    }
    
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    memset(color, 0, sizeof(color));
	    
	    for(int i=0; i<V; i++){
	        if(color[i] == 0 && !bfs(i, adj)){
	            return false;
	        }
	    }
	    return true;
	}

};
