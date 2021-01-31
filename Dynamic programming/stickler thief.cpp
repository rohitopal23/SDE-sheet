// Function to return maximum of sum without adjacent elements
ll FindMaxSum(ll arr[], ll n)
{
    // Your code here
    ll dp[n+1] = {0};
    dp[1] = arr[0];
    
    for(int i=2; i<=n; i++){
        dp[i] = max(dp[i-1], dp[i-2]+arr[i-1]);
    }
    
    return dp[n];
}
