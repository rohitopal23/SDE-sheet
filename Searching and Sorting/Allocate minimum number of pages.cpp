
int findPages(int arr[], int n, int m) {
    //code here
    
    if(m > n){
        return -1;
    }
    
    int l = *max_element(arr, arr+n);
    int r = 0;
    
    for(int i=0; i<n; i++){
        r += arr[i];
    }
    
    
    int ans = 0;
    
    while(l <= r){
        int mid = l + (r-l)/2;
        
        int i=0, scnt=0;
        while(i<n){
            int sum=0;
            while(i<n && sum+arr[i]<=mid){
                sum += arr[i++];
            }
            scnt++;
        }
        
        if(scnt <= m){
            ans = mid;
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    
    return ans;
}
