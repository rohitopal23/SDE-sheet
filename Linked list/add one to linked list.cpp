
Node* reverse(Node *head){
    Node *upNext, *prev = NULL, *cur = head;
    
    while(cur){
        upNext = cur->next;
        cur->next = prev;
        prev = cur;
        cur = upNext;
    }
    
    return prev;
}

Node* addOne(Node *head) 
{
    // Your Code here
    // return head of list after adding one
    
    head = reverse(head);
    
    Node *a = head;
    
    int dig = a->data;
    int carry = (dig+1)/10;
    a->data = (dig+1)%10;
    
    //cout<<carry<<" ";
    
    // while(a != NULL){
    //     cout<<a->data<<" ";
    //     a = a->next;
    // }
    
    a = head;
    a = a->next;
    Node *prev = head;
    
    while(carry>0 && a != NULL){
        
        int dig = a->data;
        a->data = (dig+carry)%10;
        carry = (dig+carry)/10;
        
        //cout<<carry<<" "<<a->data<<"\n";
        //cout<<a->data<<" ";
        
        prev = a;
        a=a->next;
    }
    
    if(carry > 0){
        Node *newNode = new Node(carry);
        prev->next = newNode;
    }
    
    return reverse(head);
    
}
