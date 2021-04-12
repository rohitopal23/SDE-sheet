class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string>s;
        for(string str: wordList){
            s.insert(str);
        }
        
        set<string> in;
        int cnt=1;
        
        queue<string>q;
        
        in.insert(beginWord);
        q.push(beginWord);
        
        while(!q.empty()){
            int len = q.size();
            
            while(len--){
                string str = q.front();
                q.pop();

                if(str == endWord){
                    return cnt;
                }
                
                for(int i=0; i<str.size(); i++){
                    int cur = str[i];
                    for(char ch='a'; ch<='z'; ch++){
                        str[i] = ch;
                        if(s.find(str) != s.end() && in.find(str) == in.end()){
                            in.insert(str);
                            q.push(str);
                        }
                    }
                    str[i] = cur;
                }
            }
            cnt++;
        }
        
        return 0;
    }
};
