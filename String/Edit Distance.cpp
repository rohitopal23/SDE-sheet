
class Solution
{
	public:
		int editDistance(string s, string t)
		{
		    // Code here
		    int dp[1001][1001];
		    
		    int n=s.size(), m=t.size();
		    
		    for(int i=0; i<=n; i++){
		        for(int j=0; j<=m; j++) {
		            
		            if(i == 0){
		                dp[i][j] = j;
		            }else if(j == 0){
		                dp[i][j] = i;
		            }else if(s[i-1] == t[j-1]){
		                dp[i][j] = dp[i-1][j-1];
		            }else {
		                dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]))+1;
		            }
		        }
		    }
		    
		    return dp[n][m];
		}
};
