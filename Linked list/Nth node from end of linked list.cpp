
int getNthFromLast(Node *head, int n)
{
    // Your code here
    Node *a=head, *b=head;
    
    while(b){
        if(n>0){
            b = b->next;
            n--;
        }else{
            a=a->next;
            b=b->next;
        }
    }
    
    if(n>0){
        return -1;
    }
    return a->data;
    
}
