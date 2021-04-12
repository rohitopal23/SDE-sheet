class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    int mp[200] = {0};
		    queue<char>q;
		    
		    string ans;
		    
		    for(char ch: A){
		        mp[ch]++;
		        q.push(ch);
		        
		        while(!q.empty() && mp[q.front()] > 1){
		            q.pop();
		        }
		        
		        if(q.empty()){
		            ans.push_back('#');
		        }else{
		            ans.push_back(q.front());
		        }
		    }
		    return ans;
		}

};
