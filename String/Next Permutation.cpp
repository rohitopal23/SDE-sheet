class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        
        if(N==1){
            return arr;
        }
        // code here
        int i=0;
        
        for(i=N-2; i>=0; i--){
            if(arr[i+1] > arr[i])   break;
        }
        
        if(i < 0){
            reverse(arr.begin(), arr.end());
            return arr;
        }
        
        int j;
        for(j=i+1; j<N; j++){
            if(arr[j] < arr[i]) break;
        }
        
        //cout<<i<<" "<<j<<'\n';
        j--;
        swap(arr[i], arr[j]);
        reverse(arr.begin()+i+1, arr.end());
        
        return arr;
    }
};
