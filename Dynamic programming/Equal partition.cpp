class Solution{
public:
    
    bool subsetSum(int n, int *arr, int i, int sum){
        if(sum == 0){
            return 1;
        }
        
        if(sum < 0){
            return 0;
        }
        
        return subsetSum(n, arr, i+1, sum-arr[i]) || subsetSum(n, arr, i+1, sum);
    }

    int equalPartition(int n, int arr[]){
        // code here
        int sum =0 ;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        
        if(sum % 2 == 1){
            return 0;
        }
        
        int target =sum/2;
        
        //cout<<sum<<"\n";
        // return subsetSum(N, arr, 0, sum/2);
        bool dp[n+1][target+1];
        
        
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int j=1;j<=target;j++){
            dp[0][j]=0;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=target;j++){
                if(arr[i-1]<=j)
                    dp[i][j]=(dp[i-1][j-arr[i-1]] || dp[i-1][j]);
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][target];
    }
};
