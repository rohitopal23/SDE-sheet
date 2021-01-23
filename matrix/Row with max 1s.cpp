
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int foundIndex = 0;
	    
	    for(; foundIndex < m; foundIndex++) {
	        if(arr[0][foundIndex] == 1) {
	            break;
	        }
	    }  
	    
	    int i=1;
	    int ans = 0;
	    
	    while(i < n) {
	        if(foundIndex > 0 && arr[i][foundIndex-1] == 1) {
	            ans = i;
	            foundIndex--;
	            while(foundIndex >= 0 && arr[i][foundIndex] == 1) {
	                foundIndex--;
	            }
	            
	            foundIndex++;
	        }
	        i++;
	    }
	    
	    if(foundIndex == m) {
	        return -1;
	    }
	    return ans;
	}

};
