class Solution
{
  public:
    
    long long int dp[1001][1001];
  
    long long int coinChange(int S[], int n, int coin, int i){
        if(coin == 0){
            return 1;
        }
        
        if(coin < 0 || i >= n){
            return 0;
        }
        
        if(dp[i][coin] != -1){
            return dp[i][coin];
        }
        
        return dp[i][coin] = coinChange(S, n, coin-S[i], i) + coinChange(S, n, coin, i+1) ;
        
    }
  
    long long int count( int S[], int m, int n){
        //code here.
        memset(dp, -1, sizeof(dp));
        return coinChange(S, m, n, 0);
    }
    
    //table version
    long long int count( int S[], int m, int n){
        //code here.
        
        long long int dp[m+1][n+1];
        
        memset(dp, 0, sizeof(dp));
        
        for(int i=0; i<=m; i++){
            dp[i][0] = 1;
        }
        
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                dp[i][j] = dp[i-1][j];
                
                if(j - S[i-1] >= 0){
                    dp[i][j] += dp[i][j-S[i-1]];
                }
            }
        }
        
        return dp[m][n];
    }
};
