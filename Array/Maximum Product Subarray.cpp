typedef long long ll;
//User function template for C++
class Solution{
public:
    
	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    ll maxi = 0, maxim = 1, minim = 1, flg = 0;
	    
	    for(int i=0; i<n; i++) {
	        if(arr[i] > 0) {
	            maxim = maxim * arr[i];
	            minim = min(minim * arr[i], (ll)1);
	            flg = 1;
	        }
	        
	        else if(arr[i] == 0) {
	            maxim = minim = 1;
	        }
	        
	        else {
	            ll temp = maxim;
	            maxim = max(minim * arr[i], (ll)1);
	            minim = temp * arr[i];
	        }
	        
	        //cout<<maxim<<" ";
	        maxi = max(maxi, maxim);
	    }
	    
	    if(flg == 0 && maxi == 0) {
	        return 0;
	    }
	    
	    return maxi;
	}
};
