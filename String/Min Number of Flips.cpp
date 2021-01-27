

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        string s;   cin>>s;
        
        int startone=0, startzero=0, expect1=1, expect2=0;
        
        for(char ch: s){
            
            if(expect1 != ch-48){
                startone++;
            }
            
            if(expect2 != ch-48){
                startzero++;
            }
            
            expect1 = (expect1+1)%2;
            expect2 = (expect2+1)%2;
            
            //cout<<startone<<" "<<startzero<<"\n";
        }
        
        cout<<min(startone, startzero)<<"\n";
    }
    return 0;
}
