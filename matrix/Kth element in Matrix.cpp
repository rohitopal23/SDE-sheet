int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  vector<int> arr;
  int index[n] = {0};
  
  while(arr.size() < n*n) {
      
      int mini = INT_MAX, pos = 0;
      
      for(int i=0; i<n; i++) {
          
          if(index[i] < n) {
              if(mini >= mat[i][index[i]]) {
                  mini = mat[i][index[i]];
                  pos = i;
              }
          }
          
      }
      
      arr.push_back(mini);
      index[pos]++;
  }
  
  return arr[k-1];
}
