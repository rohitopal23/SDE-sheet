#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;  cin>>n;
        ll arr[n]; for(ll i=0; i<n; i++)  cin>>arr[i];
        ll m;  cin>>m;
        
        sort(arr, arr+n);
        
        ll mini = INT_MAX;
        
        for(ll i=m-1; i<n; i++) {
            mini = min(mini, arr[i] - arr[i-m+1]);
        }
        
        cout<<mini<<"\n";

    }
    return 0;
}
