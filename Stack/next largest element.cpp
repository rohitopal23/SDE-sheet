typedef long long ll;

class Solution{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> ans;
        
        stack<ll>s;
        
        for(int i=n-1; i>=0; i--){
            while(!s.empty() && s.top() < arr[i]){
                s.pop();
            }
            
            if(s.empty()){
                ans.push_back(-1);
            }else{
                ans.push_back(s.top());
            }
            
            s.push(arr[i]);
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

