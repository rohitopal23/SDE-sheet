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

struct Node{
    char ch;
    int val;
    Node *left, *right;
};

struct compare {
   public:
    bool operator()(Node *l, Node *r){
        return (l->val > r->val);
    }
};

void printNodes(Node *a, string s){
    if(!a->left && !a->right){
        
        cout<<s<<" ";
        return;
    }
    
    printNodes(a->left, s+'0');
    printNodes(a->right, s+'1');
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        string s;   cin>>s;
        priority_queue<Node*, vector<Node *>, compare> pq;
        
        for(int i=0; i<s.size(); i++){
            
            
            Node *a = new Node();
            a->ch = s[i];
            cin>>a->val;
            
            a->left = a->right = NULL;
            
            pq.push(a);
        }
        
        while(pq.size()>1){
            Node *a = pq.top();
            pq.pop();
            Node *b = pq.top();
            pq.pop();
            
            Node *n = new Node();
            n->ch='@';
            n->val = a->val + b->val;
            
            n->left = a;
            n->right = b;
            
            pq.push(n);
        }
        
        printNodes(pq.top(), "");
        cout<<"\n";
    }
    return 0;
}
