class Solution{
  public:
    //Complete this function
    int dp[1000001];
    
    int cuts(int n, int x, int y, int z){
        int valx=0, valy=0, valz=0;
        
        if(n == 0){
            return 0;
        }
        
        if(n < 0){
            return INT_MIN;
        }
        
        if(dp[n] != -1){
            return dp[n];
        }
        
        valx = cuts(n-x, x, y, z)+1;
        valy = cuts(n-y, x, y, z)+1;
        valz = cuts(n-z, x, y, z)+1;
        
        
        //cout<<valx<<" "<<valy<<" "<<valz<<"\n";
        return dp[n] = max(valx, max(valy, valz));
    }
    
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        memset(dp, -1, sizeof(dp));
        int ans = cuts(n, x, y, z);
        
        return (ans < 0)?0:ans;
    }
};
