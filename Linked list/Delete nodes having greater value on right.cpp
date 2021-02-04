
Node *reverse(Node *head){
    Node *upNext, *prev=NULL, *cur=head;
    
    while(cur){
        upNext = cur->next;
        cur->next = prev;
        prev = cur;
        cur = upNext;
    }
    return prev;
}

Node *compute(Node *head)
{
    // your code goes here
    if(!head || !head->next){
        return head;
    }
    
    head = reverse(head);
    
    Node *prev = head;
    Node *cur = head->next;
    
    while(cur){
        if(cur->data < prev->data){
            prev->next = cur->next;
        }else{
            prev = cur;
        }
        cur = cur->next;
    }
    
    return reverse(head);
}
