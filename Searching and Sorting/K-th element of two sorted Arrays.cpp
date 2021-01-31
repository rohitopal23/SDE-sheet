
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int r=1, i=0, j=0;
        
        while(i<n && j<m){
            int val;
            if(arr1[i] <= arr2[j]){
                val = arr1[i++];
            }else {
                val = arr2[j++];
            }
            
            if(r == k){
                return val;
            }
            r++;
        }
        
        while(i < n) {
            if(r == k){
                return arr1[i];
            }
            r++;i++;
        }
        
        while(j < m){
            if(r == k){
                return arr2[j];
            }
            j++;r++;
        }
        return 0;
    }
};
