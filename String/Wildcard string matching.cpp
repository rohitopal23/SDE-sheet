bool check(string s, string t, int i, int j){
    if(i == s.size() && j == t.size()){
        return true;
    }
    
    if(i >= s.size() || j >= t.size()){
        return false;
    }
    
    if(s[i] == '*') {
        return check(s, t, i, j+1) || check(s, t, i+1, j) || check(s, t, i+1, j+1);
    }
    
    if(t[j] == '*') {
        return check(s, t, i+1, j) || check(s, t, i, j+1) || check(s, t, i+1, j+1);
    }
    
    if(s[i] == '?' || t[j] == '?' || s[i] == t[j]){
        return check(s, t, i+1, j+1);
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
        string s, t;    cin>>s>>t;
        
        if(check(s, t, 0, 0)) {
            cout<<"Yes"<<"\n";
        } else {
            cout<<"No"<<'\n';
        }
        
        //cout<<<<"\n";

    }
    return 0;
}
