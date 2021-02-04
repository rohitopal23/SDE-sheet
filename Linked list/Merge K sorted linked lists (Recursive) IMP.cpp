Node *merge(Node *a, Node *b){
    if(!a){
        return b;
    }
    if(!b){
        return a;
    }
    
    Node *res = new Node(0);
    
    if(a->data < b->data){
        res->data = a->data;
        res->next = merge(a->next, b);
    }else{
        res->data = b->data;
        res->next = merge(a, b->next);
    }
    
    return res;
}  
  
Node * mergeKLists(Node *arr[], int N)
{
       // Your code here
       if(N == 1){
           return arr[0];
       }
       
       merge(arr[N-1], mergeKLists(arr, N-1));
}
