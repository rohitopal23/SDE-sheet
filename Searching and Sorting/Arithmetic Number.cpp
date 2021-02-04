
class Solution{
public:
    int inSequence(int A, int B, int C){
        // code here
        if(B==A){
            return 1;
        }
        
        if(C== 0){
            return 0;
        }
        
        if(abs(B-A)%abs(C) == 0){
            int val = (B-A)/C + 1;
            if(val >= 1){
                return 1;
            }
        }
        
        return 0;
    }
};
