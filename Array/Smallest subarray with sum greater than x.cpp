int sb(int arr[], int n, int x)
{
    // Your code goes here
    int i=0, sum=0, len=n+1;
    int r=0, l=0;
    
    while(r < n) {
        sum += arr[r];
        
        if(sum > x) {
            
            while(l <= r && sum > x) {
                len = min(len, r-l+1);
                sum -= arr[l];
                l++;
            }
        }
        r++;
    }
    
    return len;
}
