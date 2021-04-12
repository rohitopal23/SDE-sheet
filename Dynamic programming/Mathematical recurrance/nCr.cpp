class Solution{
public:
    int nCr(int n, int r){
        // code here
        if(r > n){
            return 0;
        }
        int dp[n+1][r+1];
        memset(dp, 0, sizeof(dp));
        
        for(int i=0; i<=n; i++){
            dp[i][0] = 1;
        }
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=r && j<=i; j++){
                dp[i][j] = dp[i-1][j]% 1000000007 + dp[i-1][j-1]% 1000000007;
                dp[i][j] % 1000000007;
            }
        }
        
        
       return dp[n][r] % 1000000007;
    }
    
};
