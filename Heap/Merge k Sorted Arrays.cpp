class Solution{
    public:
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        //code here
        
        
        
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>>pq;
        
        int indexes[k] = {0};
        for(int i=0; i<k; i++){
            pq.push(make_pair(arr[i][0], i));
        }
        
        vector<int> ans;
        
        while(!pq.empty()){
            pair<int, int>p = pq.top();
            pq.pop();
            
            ans.push_back(p.first);
            
            
            if(indexes[p.second] < arr[p.second].size()-1){
                int j= ++indexes[p.second];
                pq.push(make_pair(arr[p.second][j], p.second));
                
            }
        }
        
        return ans;
    }
};
