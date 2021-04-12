class Solution{
	public:
	
	int maxSumIS(int arr[], int n)  
	{ 
	    int dp[n+1];
	    
	    dp[0] = 1;
	    
	    for(int i=1; i<=n; i++){
	        dp[i] = arr[i-1];
	        int maxi = 0;
	        for(int j=1; j<i; j++){
	            if(arr[j-1] < arr[i-1]){
	                maxi = max(maxi, dp[j]);
	            }
	        }
	        dp[i] += maxi;
	    }
	    
	    int maxi = 0;
	    for(int i=1; i<=n; i++){
	        maxi = max(maxi, dp[i]);
	    }
	    
	    return maxi;
	}  
};
