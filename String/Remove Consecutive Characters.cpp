class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        string ans;
        for(char ch: S){
            if(ans.empty() || ans.back() != ch){
                ans.push_back(ch);
            }
        }
        return ans;
    }
};
