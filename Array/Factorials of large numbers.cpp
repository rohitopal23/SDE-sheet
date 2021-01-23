#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

const ll maxs = 1e6+3;
const ll maxs1 = 1e3+4;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;   cin>>n;
        vector<ll>res;
        
        res.pb(1);
        
        for(ll i=2; i<=n; i++) {
            
            ll carry = 0;
            for(ll j=0; j<res.size(); j++) {
                ll mul = res[j] * i + carry;
                carry = mul/10;
                res[j] = mul%10;
            }
            
            while(carry) {
                res.pb(carry%10);
                carry /= 10;
            }
        }
        
        reverse(res.begin(), res.end());
        
        for(ll u: res) {
            cout<<u;
        }
        
        cout<<"\n";

    }
    return 0;
}
