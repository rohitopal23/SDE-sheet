class Solution {
public:
    
    void fill(vector<vector<int>>& image, int sr, int sc, int newColor, int prnt){
        
            image[sr][sc] = newColor;
            
            if(sr-1 >= 0 && image[sr-1][sc] == prnt)
            fill(image, sr-1, sc, newColor, prnt);
            
            if(sr+1 < image.size() && image[sr+1][sc] == prnt)
            fill(image, sr+1, sc, newColor, prnt);
            
            if(sc-1 >= 0 && image[sr][sc-1] == prnt)
            fill(image, sr, sc-1, newColor, prnt);
            
            if(sc+1 < image[0].size() && image[sr][sc+1] == prnt)
            fill(image, sr, sc+1, newColor, prnt);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        cout<<image[sr][sc]<<"\n";
        
        if(newColor != image[sr][sc])
            fill(image, sr, sc, newColor, image[sr][sc]);
        return image;
    }
};
