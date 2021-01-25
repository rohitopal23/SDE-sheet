long long getMaxArea(long long arr[], int n){
    
    // Your code here
    stack<ll> s;
    
    ll i=0, maxArea = 0;
    
    while(i < n) {
        
        if(s.empty() || arr[s.top()] <= arr[i]) {
            s.push(i++);
        }
        
        else {
            ll top = s.top();
            s.pop();
            
            ll area = arr[top] * (s.empty()? i: i-s.top()-1);
            maxArea = max(maxArea, area);
        }
    }
    
    while(!s.empty()) {
        ll top = s.top();
        s.pop();
            
        ll area = arr[top] * (s.empty()? i: i-s.top()-1);
        maxArea = max(maxArea, area);
    }
    
    return maxArea;
}
