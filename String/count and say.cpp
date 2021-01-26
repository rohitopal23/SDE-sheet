class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) {
            return "1";
        }
        
        string s = countAndSay(n-1), ans;
        
        int i=0;
        while(i < s.size()){
            int val = s[i], cnt=0;
            
            while(i<s.size() && s[i] == val){
                cnt++; i++;
            }
            
            ans.push_back(48+cnt);
            ans.push_back(val);
        }
        
        return ans;
    }
};
