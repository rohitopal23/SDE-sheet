class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        
        
        int dp[n+1][m+1];
        memset(dp, 0, sizeof(dp));
        int maxi=0;
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                
                if(mat[i-1][j-1] == 1){
                    dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1])) + mat[i-1][j-1]; 
                    maxi = max(dp[i][j], maxi);
                }
                
                else{
                    dp[i][j] = 0;
                }
            }
        }
        
        return maxi;
    }
};
