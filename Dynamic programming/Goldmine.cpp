class Solution{
public:
    int dp[1000][1000];
    
    int cal(int n, int m, vector<vector<int>>&M, int x, int y){
        if(x<0 || x >= n || y>=m){
            return 0;
        }
        
        if(dp[x][y] != -1){
            return dp[x][y];
        }
        
        return dp[x][y] = max(
                cal(n,m,M,x+1,y+1), max(
                    cal(n,m,M,x,y+1), cal(n,m,M,x-1,y+1)))+M[x][y];
    }

    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        memset(dp, -1, sizeof(dp));
        int maxi = 0;
        for(int i=0; i<n; i++){
            maxi = max(maxi, cal(n,m,M,i,0));
        }
        return maxi;
    }
};
