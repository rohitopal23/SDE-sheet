class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int i=0;
        while(i < arr.size()) {
            int start = arr[i][0];
            int end = arr[i][1];
            
            i++;
            while(i < arr.size() && arr[i][0] <= end) {
                end = max(end, arr[i][1]);
                i++;
            }
            
            ans.push_back({start, end});
        }
        return ans;
    }
};
