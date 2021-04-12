#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define pf push_front
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*1ll * (b)) / gcd(a, b)
typedef pair<ll, ll> pii;
typedef pair<ll, pii> piii;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<piii> viii;
typedef set<ll> Set;
typedef long long ll;
typedef unsigned long long ull;
typedef long long int lli;
typedef unsigned long long int ulli;

const ll maxs = 1e6+3;
const ll maxs1 = 1e3+4;
/*
//FACTORIAL
ll fact[maxs];
ll fib[maxs];
void FACT()
{fact[0]=1;for(ll i=1; i<maxs; i++)fact[i] = (i % mod * fact[i-1] % mod) % mod;}
bool isPrime(ll n) { if (n <= 1)  return false; if (n <= 3)  return true;if (n%2 == 0 || n%3 == 0) return false; for (int i=5; i*i<=n; i=i+6) if (n%i == 0 || n%(i+2) == 0) return false; return true; }
void swap(int &x, int &y) { int temp = x; x = y; y = temp; }
ll fastpow(ll x,ll y)
{ll res = 1;x = x % mod;while (y > 0){ if (y & 1)res = (res * x) % mod; y = y >> 1 ; x = (x * x) % mod; } return res;}
//FIBONACCI
void FIB()
{ fib[0]=0; fib[1]=1; for(ll i=2; i<maxs; i++)fib[i] = (fib[i-1] % mod + fib[i-2] % mod)% mod;}

//for_graph
vector<ll>graph[maxs];
bool visited[maxs];
*/

void heapify(ll arr[], ll n, ll cur){
    ll left = 2*cur+1;
    ll right = 2*cur+2;
    
    ll largest = cur;
    
    if(left <n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right <n && arr[right] > arr[largest]){
        largest = right;
    }
    
    if(largest != cur){
        swap(arr[largest], arr[cur]);
        heapify(arr, n, largest);
    }
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m;    cin>>n>>m;
        ll arr[n+m];
        
        for(ll i=0; i<n+m; i++){
            cin>>arr[i];
        }
        
        for(ll i=(n+m-1)/2; i>=0; i--){
            heapify(arr, n+m, i);
        }
        
        for(ll i=0; i<n+m; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}
