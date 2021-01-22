
class Solution{   
public:
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        int index=0, i=0;
        
        while(i < array.size()) {
            if(array[i] < a) {
                swap(array[index++], array[i]);
            }
            i++;
        }
        
        index = array.size()-1, i=array.size()-1;
        
        while(i >= 0) {
            if(array[i] > b) {
                swap(array[index--], array[i]);
            }
            i--;
        }
    }
};
