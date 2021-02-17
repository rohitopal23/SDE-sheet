int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        int n, k, sum=0;
        cin>>n>>k;
        
        ll arr[n];
        for(ll i=0; i<n; i++) {
            cin>>arr[i];
        }
        
        sort(arr, arr+n);
        
        ll req = ceil(n/(double)(k+1));
        
        ll mini=0, maxi=0, l=0, r=n-1;
        
        while(req--){
            mini += arr[l++];
            maxi += arr[r--];
        }
        
        cout<<mini<<" "<<maxi<<"\n";
    }
    return 0;
}
