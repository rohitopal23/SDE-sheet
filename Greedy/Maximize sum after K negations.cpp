long long int maximizeSum(long long int a[], int n, int k)
{
    // Your code goes here
    ll mini = INT_MAX;
    ll sum = 0;
    
    sort(a, a+n);
    
    for(int i=0; i<n; i++){
        if(a[i] < 0 && k>0){
            a[i] = -a[i];
            k--;
        }
        mini = min(mini, abs(a[i]));
        sum += a[i];
    }
    
    if(k > 0 && k%2 == 1){
        sum -= 2*mini;
    }
    return sum;
}
