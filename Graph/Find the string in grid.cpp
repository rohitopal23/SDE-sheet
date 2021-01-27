
int n, m, size;
char mat[101][101];
bool vis[101][101];

int dx[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy[] = {1, 1, 1, 0, -1, -1, -1, 0};

bool search(int i, int j, int index, string s, int dir){
    
    if(index == size){
        return true;
    }
    
    if(i >= n || i < 0 || j >= m || j < 0 || mat[i][j] != s[index]){
        return false;
    }
    
    if(search(i+dx[dir], j+dy[dir], index+1, s, dir)){
        return true;
    }
    
    return false;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>mat[i][j];
                vis[i][j] = false;
                //cout<<mat[i][j]<<" ";
            }
            //cout<<"\n";
        }
        
        
        string s;   cin>>s;
        size = s.size();
        int ans=0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j] == s[0]){
                    
                    for(int k=0; k<8; k++){
                        if(search(i, j, 0, s, k)){
                            cout<<i<<" "<<j<<", ";
                            ans++;
                            break;
                        }
                    }
                    
                }
            }
        }
        
        if(ans == 0){
            cout<<-1;
        }
        
        cout<<"\n";

    }
    return 0;
}
