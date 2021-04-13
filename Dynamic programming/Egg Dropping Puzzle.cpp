class Solution{
    public:
    /* Function to get minimum number of trials needed in worst 
      case with n eggs and k floors */
    
    int dp[201][201];  
    
    int solve(int e, int f){
        if(f == 0 || f == 1 || e == 1){
            return f;
        }
        
        if(dp[e][f] != -1){
            return dp[e][f];
        }
        
        int mini = INT_MAX;
        
        for(int i=1; i<=f; i++){
            int val = 1 + max(solve(e-1, i-1), solve(e, f-i));
            mini = min(mini, val);
        }
        
        return dp[e][f] = mini;
    }
      
    int eggDrop(int n, int k) 
    {
        // your code here
        memset(dp, -1, sizeof(dp));
        return solve(n, k);
    }
};
