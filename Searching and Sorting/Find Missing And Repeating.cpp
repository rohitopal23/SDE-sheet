class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *ans = new int(2);
        
        int i=0;
        int sum =0, real=0;
        for(int i=0; i<n; i++){
            sum += arr[i];
            real += i+1;
            arr[i]--;
        }
        
        for(int i=0; i<n; i++){
            if(arr[i] != i){
                int go = arr[i], end = i;
                while(go != end && go != arr[go]){
                    int tmp = arr[go];
                    arr[go] = go;
                    go = tmp;
                }
                
                //long long val = (n*(n+1))/2;
                //cout<<val<<"\n";
                int val = real - (sum-go-1);
                if(go != end){
                   ans[0] = go+1;
                   ans[1] = val;
                   return ans;
                } else {
                    arr[end] = end;
                }
                
            }
        }
        
        return ans;
    }
};
