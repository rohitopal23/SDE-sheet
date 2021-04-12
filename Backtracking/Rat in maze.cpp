
class Solution{
    public:
    
    void dfs(vector<vector<int>> &m, int n, vector<string> &ans, string s, int x, int y){
        if(x < 0 || x >= n || y < 0 || y >= n){
            return;
        }
        
        if(m[x][y] == 0){
            return;
        }
        
        if(x == n-1 && y == n-1){
            ans.push_back(s);
            return;
        }
        
        m[x][y] = 0;
        dfs(m, n, ans, s+"U", x-1, y);
        dfs(m, n, ans, s+"D", x+1, y);
        dfs(m, n, ans, s+"L", x, y-1);
        dfs(m, n, ans, s+"R", x, y+1);
        m[x][y] = 1;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        dfs(m, n, ans, "", 0, 0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

    

