
class Solution
{   
public:     

    void print(int ix1, int ix2, int iy1, int iy2, vector<int>& ans, vector<vector<int>> matrix) {
        
        for(int i=iy1; i<=iy2; i++) {
            ans.push_back(matrix[ix1][i]);
        }
        
        for(int i=ix1+1; i<=ix2; i++) {
            ans.push_back(matrix[i][iy2]);
        }
        
        
        
        for(int i=iy2-1; i >= iy1 && ix1 != ix2; i--) {
            ans.push_back(matrix[ix2][i]);
        }
        
        for(int i=ix2-1; i > ix1 && iy1 != iy2; i--) {
            ans.push_back(matrix[i][iy1]);
        }
    }

    vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c) 
    {
        // code here 
        int ix1=0, ix2=r-1, iy1=0, iy2=c-1;
        vector<int> ans;
        
        while(ix1 <= ix2 && iy1 <= iy2) {
            print(ix1, ix2, iy1, iy2, ans, matrix);
            ix1++; ix2--; iy1++; iy2--;
        }
        
        return ans;
    }
};
