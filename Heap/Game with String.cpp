class Solution{
public:
    int minValue(string s, int k){
        // code here
        priority_queue<int>pq;
        
        for(int i='a'; i<='z'; i++){
            int cnt=0;
            for(int ch: s){
                if(ch == i){
                    cnt++;
                }
            }
            if(cnt > 0){
                pq.push(cnt);
            }
        }
        
        while(k--){
            int val = pq.top();
            pq.pop();
            pq.push(val-1);
        }
        
        int ans = 0;
        
        while(!pq.empty()){
            ans += pq.top()*pq.top();
            pq.pop();
        }
        return ans;
    }
};
