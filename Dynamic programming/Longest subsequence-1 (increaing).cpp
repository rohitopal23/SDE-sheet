class Solution{
public:
    int longestSubsequence(int N, int arr[])
    {
        // code here
        int dp[N] = {0};
        
        
        for(int i=1; i<=N; i++){
            int maxi=0;
            for(int j=1; j<i; j++){
                if(abs(arr[j-1]-arr[i-1]) == 1){
                    maxi = max(maxi, dp[j]);
                }
            }
            
            dp[i] = maxi+1;
        }
        
        int maxi = 0;
        
        for(int i=1; i<=N; i++){
            maxi = max(maxi, dp[i]);
        }
        
        return maxi;
    }
};

