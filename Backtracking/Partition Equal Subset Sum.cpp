
class Solution{
public:
    int dp[1000][1000];

    bool check(int arr[], int i, int curSum, int sum, int N){
        if(2*curSum == sum){
            return true;
        }
        
        if(2*curSum > sum || i == N){
            return false;
        }
        
        if(dp[i][curSum] != -1){
            return dp[i][curSum];
        }
        
        return  dp[i][curSum] = check(arr, i+1, curSum+arr[i-1], sum, N) || check(arr, i+1, curSum, sum, N);
    }

    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0; i<N; i++){
            sum += arr[i];
        }
        
        memset(dp, -1, sizeof(dp));
        
        return check(arr, 0, 0, sum, N);
        
    }
};
