
// k : the quadruple sum required
vector<vector<int> > fourSum(vector<int> &arr, int k) {
    // Your code goes here
    
    sort(arr.begin(), arr.end());
    
    set<vector<int>> s;
    
    for(int i=arr.size()-1; i>=0; i--){
        for(int j=i-1; j>=0; j--){
            int l=0, r=j-1;
                
            while(l < r){
                int val = arr[l] + arr[r] + arr[i] + arr[j];
                
                if(val == k){
                    s.insert({arr[l], arr[r], arr[j], arr[i]});
                }
                
                if(val >= k){
                    r--;
                }else{
                    l++;
                }
            }
            
        }
    }
    
    vector<vector<int>> ans;
    
    for(vector<int>v: s){
        ans.push_back(v);
    }
    
    return ans;
}
