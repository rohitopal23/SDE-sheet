class Solution{   
public:
    string solve(int arr[], int n) {
        // code here
        sort(arr, arr+n);
        
        vector<int>a, b;
        
        bool turn = true;
        
        for(int i=0; i<n; i++){
            if(!arr[i] == 0){
               if(turn){
                    a.push_back(arr[i]);
                }else{
                    b.push_back(arr[i]);
                } 
                turn = !turn;
            }
            
        }
        
        int i=0, j=0;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        int carry=0;
        
        string ans;
        
        while(i<a.size() && j<b.size()){
            int val = a[i++]+b[j++]+carry;
            
            ans.push_back(val%10+'0');
            carry = val/10;
        }
        
        while(i < a.size()){
            int val = a[i++]+carry;
            
            ans.push_back(val%10+'0');
            carry = val/10;
        }
        
        while(j < b.size()){
            int val = b[j++]+carry;
            
            ans.push_back(val%10+'0');
            carry = val/10;            
        }
        
        while(carry){
            int val = carry;
            ans.push_back(val%10+'0');
            carry = val/10; 
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
