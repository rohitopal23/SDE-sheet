int majorityElement(int arr[], int size)
{
    
    // your code here
    int cnt=0, value=0;
    
    for(int i=0; i<size; i++){
        if(cnt == 0){
            cnt++;
            value = arr[i];
        } else if(arr[i] == value){
            cnt++;
        } else {
            cnt--;
        }
    }
    
    int check = 0;
    
    for(int i=0; i<size; i++){
        check += value == arr[i];    
    }
    
    return (check > size/2)?value: -1;
}
