int lcs(int x, int y, string s1, string s2){
    
    // your code here
    int dp[1001][1001], n=x, m=y;
    memset(dp, 0, sizeof(dp));
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    return dp[n][m];
    
}

