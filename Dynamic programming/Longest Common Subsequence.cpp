class Solution{
    public:
        int lcs(int x, int y, string s1, string s2){
        
        // your code here
        int dp[s1.size()+1][s2.size()+1];
        
        memset(dp, 0, sizeof(dp));
        
        for(int i=1; i<=s1.size(); i++){
            for(int j=1; j<=s2.size(); j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        
        return dp[s1.size()][s2.size()];
        
    }
};

//space efficient
int lcs(string &X, string &Y)
{
      
    // Find lengths of two strings
    int m = X.length(), n = Y.length();
  
    int L[2][n + 1];
  
    // Binary index, used to
    // index current row and
    // previous row.
    bool bi;
  
    for (int i = 0; i <= m; i++)
    {
          
        // Compute current 
        // binary index
        bi = i & 1;
  
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[bi][j] = 0;
  
            else if (X[i-1] == Y[j-1])
                 L[bi][j] = L[1 - bi][j - 1] + 1;
  
            else
                L[bi][j] = max(L[1 - bi][j], 
                               L[bi][j - 1]);
        }
    }
  
    // Last filled entry contains
    // length of LCS
    // for X[0..n-1] and Y[0..m-1] 
    return L[bi][n];
}
