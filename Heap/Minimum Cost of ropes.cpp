typedef long long ll;

class Solution{
    public:
        long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<ll, vector<ll>, greater<ll>>pq;
        
        for(ll i=0; i<n; i++){
            pq.push(arr[i]);
        }
        
        ll ans=0;
        
        while(pq.size() > 1){
            ll a = pq.top();
            pq.pop();
            ll b = pq.top();
            pq.pop();
            
            ans += (a+b);
            
            pq.push(a+b);
        }
        
        return ans;
        
    }
};

