vector<int> t1[20];
vector<int> t2[20];

bool check(int i){
    int l=0, r=t1[i].size()-1;
    if(t1[i].size() == t2[i].size()){
        while(l < t1[i].size()){
            if(t1[i][l] == t2[i][r]){
                if(!check(t1[i][l])){
                    return false;
                }
            }else{
                return false;
            }
            l++;r--;
        }
    }
    return true;
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, e;    cin>>n>>e;
        
        for(int i=1; i<=n; i++){
            t1[i].clear();
            t2[i].clear();
        }
        
        int k=e;
        while(k--){
            int x, y;   cin>>x>>y;
            t1[x].push_back(y);
        }
        
        k=e;
        while(k--){
            int x, y;   cin>>x>>y;
            t2[x].push_back(y);
        }
        
        cout<<check(1)<<"\n";
    }
    return 0;
}
