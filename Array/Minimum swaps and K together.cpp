int minSwap(int *arr, int n, int k) {
    // Complet the function
    int total=0;
    
    for(int i=0; i<n; i++) {
        if(arr[i] <= k) {
            total ++;
        }
    }
    
    int bad=0;
    for(int i=0; i<total; i++) {
        if(arr[i] > k) {
            bad++;
        }
    }
    
    int ans = bad;
    
    for(int i=0, j=total; j<n; j++, i++) {
        
        if(arr[i] > k) {
            bad--;
        }
        
        if(arr[j] > k ){
            bad++;
        }
        
        ans = min(ans, bad);
    }
    
    return ans;
}
