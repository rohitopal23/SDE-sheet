class Solution
{
public:
    int countFriendsPairings(int n) 
    { 
        // code herell 
        long long arr[n+4];
    	arr[1]=1;
    	arr[2]=2;
    	for(long long i=3;i<=n;i++)
    	    arr[i]=(arr[i-1]%1000000007 + ((i-1) * arr[i-2])%1000000007);
    	return arr[n]%1000000007;
    }
        
};    
