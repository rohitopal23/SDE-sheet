bool find3Numbers(int arr[], int N, int X)
{
    //Your Code Here
    sort(arr, arr+N);
    
    for(int i=N-1; i>=0; i--) {
        int l=0, r=i-1;
        
        while(l < r) {
            if(arr[i]+arr[l]+arr[r] > X) {
                r--;
            } else if(arr[i]+arr[l]+arr[r] < X) {
                l++;
            } else {
                return true;
            }
        }
    }
    
    return false;
}
