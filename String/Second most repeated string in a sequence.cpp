
class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string, int> mp;
        
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        int maxi=INT_MIN, second = INT_MIN;
        string first, sec;
        
        for(auto it=mp.begin(); it!=mp.end(); it++){
            int val = it->second;
            
            if(val > maxi){
                second = maxi;
                sec = first;
                maxi = val;
                first = it->first;
            } else if(val > second){
                second = val;
                sec = it->first;
            }
        }
        
        return sec;
    }
};
