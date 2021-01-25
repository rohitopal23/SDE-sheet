class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        int dp[n][m];
        
        memset(dp, 0, sizeof(dp));
        
        for(int i=0; i<n; i++)  dp[i][0] = mat[i][0];
        for(int i=0; i<m; i++)  dp[0][i] = mat[0][i];
        
        for(int i=1; i<n; i++) {
            for(int j=1; j<m; j++) {
                if(mat[i][j])
                    dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]))+1;
                else
                    dp[i][j] = 0;
            }
        }
        
        int maxi = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                maxi = max(dp[i][j], maxi);
            }
        }
        
        return maxi;
    }
};
