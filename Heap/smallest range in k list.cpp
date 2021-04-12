#include<queue>
using namespace std;

// you are required to complete this function 
// function should print the required range
pair<int,int> findSmallestRange(int arr[][N], int n, int k)
{
      //code here
      int indexes[k] = {0};
      
      priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
      
      int mini = INT_MAX, maxi = INT_MIN;
      
      for(int i=0; i<k; i++){
          mini = min(mini, arr[i][0]);
          maxi = max(maxi, arr[i][0]);
          
          pq.push(make_pair(arr[i][0], i));
      }
      
      pair<int,int> ans = make_pair(mini, maxi);
      
      while(!pq.empty()){
          pair<int,int> p = pq.top();
          pq.pop();
          
          //cout<<p.first<<" "<<p.second<<"--------------\n";
          
          if(indexes[p.second] < n-1){
              indexes[p.second]++;
              pq.push(make_pair(arr[p.second][indexes[p.second]], p.second));
              maxi = max(arr[p.second][indexes[p.second]], maxi);
              
              mini = pq.top().first;
              //cout<<maxi<<' '<<mini<<"\n";
              if(maxi-mini < ans.second-ans.first){
                  ans = make_pair(mini, maxi);
              }
          }else{
              break;
          }
          
          mini = pq.top().first;
          //cout<<maxi<<' '<<mini<<"\n";
          if(maxi-mini < ans.second-ans.first){
              ans = make_pair(mini, maxi);
          }
          
          
      }
      return ans;
}
