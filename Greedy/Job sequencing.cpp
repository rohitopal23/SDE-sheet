bool sortby(Job a, Job b){
    return a.profit < b.profit;
}

pair<int,int> JobScheduling(Job arr[], int n) 
{ 
    // your code here
    sort(arr, arr+n, sortby);
    
    int job[101] = {0};
    int cnt=0, profit=0;
    
    for(int i=n-1; i>=0; i--){
        int deadline = arr[i].dead;
        
        while(deadline>0){
            if(job[deadline]==0){
                job[deadline] = 1;
                break;
            }
            deadline--;
        }
        
        if(deadline > 0){
            cnt++;
            profit += arr[i].profit;
        }
    }
    
    return make_pair(cnt, profit);
} 

