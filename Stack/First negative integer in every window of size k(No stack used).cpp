int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;   cin>>n;
        ll arr[n];  for(ll i=0; i<n; i++)   cin>>arr[i];
        ll k;   cin>>k;
        
        int l=0, r=k-1, neg = 0;
        
        while(neg < n && arr[neg] >= 0){
            neg++;
        } 
        
        while(r<n){
            if(neg >= l && neg <= r){
                cout<<arr[neg]<<" ";
            }else if(neg < l){
                neg++;
                while(neg < n && arr[neg] >= 0){
                    neg++;
                }
                
                if(neg >= l && neg <= r){
                    cout<<arr[neg]<<" ";
                }else{
                    cout<<0<<" ";
                }
            }else{
                cout<<0<<" ";
            }
            l++; r++;
        }
        cout<<"\n";
    }
    return 0;
}
