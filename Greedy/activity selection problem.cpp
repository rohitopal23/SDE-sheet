int maxMeetings(int start[], int end[], int n) {
    // Your code here
    vector<pair<int, int>>v;
    
    for(int i=0; i<n; i++)  v.push_back(make_pair(end[i], start[i]));
    
    sort(v.begin(), v.end());
    
    int s = v[0].second, e = v[0].first ;
    int ans = 1;
    
    for(int i=1; i<n; i++){
        pair<int, int>p = v[i];
        
        if(p.second > e){
            ans++;
            s = p.second;
            e = p.first;
        }
    }
    
    return ans;
}
