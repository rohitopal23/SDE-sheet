class Solution {
  public:
  
    int findMax(string s, char ch){
        int left=0, right=0;
        int maxlen = 0;
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == ch){
                left++;
            }else{
                right++;
            }
            
            if(right == left){
                maxlen = max(maxlen, right*2);
            }else if(right > left){
                left = right = 0;
            }
        }
        return maxlen;
    }
  
    int findMaxLen(string s) {
        // code here
        int x = findMax(s, '(');
        reverse(s.begin(), s.end());
        
        int y = findMax(s, ')');
        
        return max(x, y);
    }
};
