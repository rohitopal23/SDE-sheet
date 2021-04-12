
class Solution{
    public:
        vector <int> max_of_subarrays(int *arr, int n, int k){
        // your code here
        deque<int>dq;
        vector<int> ans;
        
        for(int i=0; i<n; i++){
            
            if(i > k-1 && arr[i-k] == dq.front()){
                dq.pop_front();
            }
            
            while(!dq.empty() && dq.back() < arr[i]){
                dq.pop_back();
            }
            
            dq.push_back(arr[i]);
            
            if(i >= k-1){
                
                ans.push_back(dq.front());
            }
        }
        return ans;
    }
};
