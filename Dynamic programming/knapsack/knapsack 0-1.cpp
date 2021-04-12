class Solution{
    public:
    // Returns the maximum value that  
    // can be put in a knapsack of capacity W 
    int knapSack(int W, int wt[], int val[], int n) { 
       // Your code here
       int dp[n+1][W+1];
       memset(dp, 0, sizeof(dp));
       
       
       for(int i=1; i<=n; i++){
           for(int j=1; j<=W; j++){
               if(j-wt[i-1]>=0){
                   dp[i][j] = max(dp[i-1][j-wt[i-1]]+val[i-1], dp[i-1][j]);
               }else{
                   dp[i][j] = dp[i-1][j];
               }
           }
       }
       
       return dp[n][W];
    }
};
