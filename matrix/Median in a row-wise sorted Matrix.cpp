
class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here  
        
        for(int i=0; i<r; i++){
            sort(matrix[i].begin(), matrix[i].end());
        }
        
        
        int index[200] = {0};
        int in=0 ;
        int end = (r*c)/2;
        
        int mini, pos;
        
        while(in <= end) {
            mini=INT_MAX, pos=0;
            
            for(int i=0; i<r; i++){
                if(index[i] < c){
                    if(mini > matrix[i][index[i]]){
                        mini = matrix[i][index[i]];
                        pos = i;
                    }
                }
                
            }
            
            index[pos]++;
            in++;
        }
        
        return mini;
    }
};
