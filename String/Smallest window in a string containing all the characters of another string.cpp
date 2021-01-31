
bool check(int *S, int *P){
    for(int i='A'; i<='z'; i++){
        if(P[i] > 0 && P[i] > S[i]){
            return false;
        }
    }
    return true;
}

string smallestWindow (string s, string p){
    // Your code here
    int P[300] = {0}, S[300] = {0};
    
    for(char ch: p){
        P[ch]++;
    }
    
    int l=0, r=0, ansl=0, ansr=0;
    int ans = INT_MAX;
    
    while(r < s.size()){
        S[s[r]]++;
        
        if(check(S, P)){
            while(l <= r && check(S, P)){
                if(ans > r-l+1){
                    ans = r-l+1;
                    ansr = r;
                    ansl = l;
                }
                //ans = min(ans, r-l+1);
                S[s[l]]--;
                l++;
            }
        }
        r++;
    }
    
    if(ans == INT_MAX){
        return "-1";
    }
    
    return s.substr(ansl, ansr-ansl+1);
}
