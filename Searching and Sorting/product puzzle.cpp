typedef long long int ll;

vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   
    //code here     
    if(n == 1){
        return {1};
    }
    
    ll left[n], right[n];
    
    left[0] = nums[0];
    
    for(int i=1; i<n; i++){
        left[i] = left[i-1]*nums[i];
    }
    
    right[n-1] = nums[n-1];
    
    for(int i=n-2; i>=0; i--){
        right[i] = right[i+1]*nums[i];
    }
    
    vector<ll> ans;
    
    ans.push_back(right[1]);
    
    for(int i=1; i<n-1; i++){
        ans.push_back(left[i-1]*right[i+1]);
    }
    
    ans.push_back(left[n-2]);
    
    return ans;
}
