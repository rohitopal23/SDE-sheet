ll findSubarray(vector<ll> arr, int n ) {
    //code here
    
    unordered_map<ll, ll> mp;
    ll ans=0;
    
    ll sum=0;
    
    // for(int u:arr){
    //     if(u != 0){
    //         break;
    //     }
    //     ans++;
    // }
    
    for(int u: arr){
        sum += u;
        
        if(sum == 0){
            ans++;
        }
        ans += mp[sum];
        mp[sum]++;
        //cout<<sum<<" "<<mp[sum]<<"\n";
         
        
        //cout<<ans<<" ";
    }
    return ans;
}

