
class Solution {
  public:
    
    void dfs(vector<int> &A, int B, int in, vector<vector<int>> &ans, vector<int> &cur){
        if(B==0){
            // vector<int>a;
            // for(int u:cur){
            //     a.push_back(u);
            // }
            ans.push_back(cur);
            return;
        }
        
        if(in >= A.size() || B < 0){
            return;
        }
        
        cur.push_back(A[in]);
        dfs(A, B-A[in], in, ans, cur);
        
        cur.pop_back();
        dfs(A, B, in+1, ans, cur);
        
        
        
    }
  
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        sort(A.begin(), A.end());
        
        vector<int> arr;
        set<int>s;
        
        for(int u: A){
            if(s.find(u) == s.end()){
                arr.push_back(u);
                s.insert(u);
            }
        }
        
        vector<int> cur;
        
        vector<vector<int> >res;
        
        dfs(arr, B, 0, res, cur);
        
        // for(vector<int>v: ans){
        //     res.push_back(v);
        // }
        
        return res;
    }
};

