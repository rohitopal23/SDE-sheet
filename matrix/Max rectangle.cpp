int getAreaMax(int M[MAX][MAX], int k, int m) {
    
    stack<int> s;
    
    int i=0, maxArea = 0;
    
    while(i < m) {
        
        if(s.empty() || M[k][s.top()] <= M[k][i]) {
            s.push(i++);
        }
        
        else {
            int top = s.top();
            s.pop();
            
            int area = M[k][top] * (s.empty()? i: i-s.top()-1);
            maxArea = max(maxArea, area);
        }
    }
    
    while(!s.empty()) {
        int top = s.top();
        s.pop();
            
        int area = M[k][top] * (s.empty()? i: i-s.top()-1);
        maxArea = max(maxArea, area);
    }
    
    return maxArea;
}

/*You are required to complete this method*/
int maxArea(int M[MAX][MAX], int n, int m) {
    // Your code here
    
    int maxi = 0;
    
    for(int i=1; i<n; i++) {
        for(int j=0; j<m; j++) {
            
            if(M[i][j]) {
                M[i][j] += M[i-1][j];
            }
            
        }
        
        maxi = max(maxi, getAreaMax(M, i, m));
    }
    
    maxi = max(maxi, getAreaMax(M, 0, m));
            
    return maxi;
    
}

