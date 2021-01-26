
class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> mat) {
        
            
          // code here
          for(int i=0; i<N; i++){
              sort(mat[i].begin(), mat[i].end());
          } 
          
          int n=N, m=N;
          
          vector<int> arr;
          int index[1001] = {0};
          
          while(arr.size() < n*m) {
              
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
          
          int k=0;
          
          vector<vector<int>> ans;
          
          for(int i=0; i<n; i++){
              vector<int> a;
              for(int j=0; j<m; j++){
                  a.push_back(arr[k++]);
              }
              
              ans.push_back(a);
          }
          
          return ans;
          
    }
};
