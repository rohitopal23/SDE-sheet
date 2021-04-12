class Solution {
public:
    string reorganizeString(string S) {
        string ans;
        priority_queue<pair<int,int>> pq;
        
        map<char,int>mp;
        for(char ch:S){
            mp[ch]++;
        }
        
        for(char ch='a'; ch<='z'; ch++){
            if(mp[ch]>0){
                pq.push(make_pair(mp[ch], ch));
            }
        }
        
        while(!pq.empty()){
            char last = (ans.empty())?' ':ans.back();
            
            if(pq.top().second == last){
                pair<int,int>tmp = pq.top();
                pq.pop();
                
                if(pq.empty()){
                    return "";
                }else{
                    pair<int,int>p = pq.top();
                    pq.pop();
                    
                    ans.push_back(p.second);
                    
                    if(p.first != 1){
                        p.first--;
                        pq.push(p);
                    }
                }
                pq.push(tmp);
            }else{
                pair<int,int>p = pq.top();
                pq.pop();
                    
                ans.push_back(p.second);
                    
                if(p.first != 1){
                    p.first--;
                    pq.push(p);
                }
            }
        }
        return ans;
    }
};
