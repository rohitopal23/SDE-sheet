
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        int ans=0;
        string s;   cin>>s;
        
        if(s.size()&1) {
            cout<<-1;
        } else {
            stack<int>st;
            
            for(char ch: s){
                if(ch == '{' || st.empty()){
                    st.push(ch);
                } else if(st.top() == '{') {
                    st.pop();
                } else{
                    st.push(ch);
                }
            }   
            
            int unbalanced = st.size();
            int openUnBalanced = 0;
            
            while(!st.empty() && st.top() == '{'){
                st.pop();
                openUnBalanced++;
            }
            
            cout<<unbalanced/2 + openUnBalanced%2;
        }
        
        cout<<"\n";

    }
    return 0;
}
