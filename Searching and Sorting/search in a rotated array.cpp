class Solution {
public:
    
    int findPivot(vector<int>&nums, int l, int r){
        while(l < r){
            int mid = l + (r-l)/2;
            
            if(mid+1 == nums.size() || nums[mid] > nums[mid+1]){
                return mid;
            }
            
            if(nums[l] <= nums[mid]){
                l = mid+1;
            }else {
                r = mid-1;
            }
        }
        
        return l;
        
        //return nums.size()-1;
    }
    
    int bs(vector<int>&nums, int l, int r, int t){
        while(l <= r){
            int mid = l + (r-l)/2;
            if(nums[mid] == t){
                return mid;
            }
            
            if(nums[mid] > t) {
                r = mid-1;
            }else {
                l = mid+1;
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int pivot = findPivot(nums, 0, nums.size()-1);
        cout<<pivot<<"\n";
        return max(bs(nums, 0, pivot, target), bs(nums, pivot+1, nums.size()-1, target));
    }
};
