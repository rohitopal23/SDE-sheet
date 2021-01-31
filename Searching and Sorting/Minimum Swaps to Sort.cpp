class Solution {
private:
public:


    

    

	int minSwaps(vector<int>&nums){
	    // Code here
	    vector<int> sorted(nums.begin(), nums.end());
	    
	    sort(sorted.begin(), sorted.end());
	    
	    int loc[1000001] = {0};
	    int n = nums.size(), ans=0;
	    
	    for(int i=0; i<n; i++){
	        loc[sorted[i]] = i;
	    }
	    
	    for(int i=0; i<n; i++){
	        if(loc[nums[i]] != i){
	            int go = loc[nums[i]], val = nums[i], end = i;
	            int cycleLength=0;
	            
	            while(go != i){
	                int tempgo = loc[nums[go]];
	                int tempval = nums[go];
	                
	                nums[go] = val;
	                val = tempval;
	                go = tempgo;
	                
	                cycleLength++;
	            }
	            
	            nums[end] = val;
	            ans += cycleLength;
	        }
	    }
	    
	    return ans;
	}
};
