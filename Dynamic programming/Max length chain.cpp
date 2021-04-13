bool pair_sort(struct val p, struct val q){
    return p.first < q.first;
}
int maxChainLen(struct val p[],int n)
{

    sort(p,p+n,pair_sort);
    int dp[n];
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        a[i]=p[i].first;
        b[i]=p[i].second;
    }
     for(int i=0;i<n;i++)
      dp[i]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>b[j] && dp[i]<dp[j]+1){
                dp[i]=dp[j]+1;
            }
        }
    }
    
    int max1=INT_MIN;
    for(int i=0;i<n;i++)
    {
   
      max1=max(max1,dp[i]);
    }
    return max1;
}
