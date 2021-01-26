int dp[1001][1001];

int MCM(string a, int l, int r, unordered_set<string>& s){
    
    if(dp[l][r] != -1){
        return dp[l][r];
    }
    
    if(s.find(a.substr(l, r-l+1)) != s.end()){
        return 1;
    }
    
    if(l == r) {
        return dp[l][r] = 0;
    }
    
    for(int i=l; i<r; i++){
        if(MCM(a, l, i, s) && MCM(a, i+1, r, s)){
            return dp[l][r] = 1;
        }
    }
    
    return dp[l][r] = 0;
}

int wordBreak(string A, vector<string> &B) {
    //code here
    unordered_set<string> s;
    
    for(string str: B){
        s.insert(str);
    }
    
    memset(dp, -1, sizeof(dp));
    
    return MCM(A, 0, A.size()-1, s);
    
}
