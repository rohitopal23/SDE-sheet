
Node *reverse(Node *head){
    Node *upNext, *prev = NULL, *cur=head;
    
    while(cur){
        upNext = cur->next;
        cur->next = prev;
        prev = cur;
        cur = upNext;
    }
    
    return prev;
}


struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    // code here
    int carry =0;
    
    first = reverse(first);
    second = reverse(second);
    
    Node *a, *start = NULL;
    
    while(first && second){
        int dig1 = first->data, dig2 = second->data;
        
        int val = (dig1+dig2+carry)%10;
        carry = (dig1+dig2+carry)/10;
        
        Node *newNode = new Node(val);
        
        if(!start){
            start = a = newNode;
        }else {
            a->next = newNode;
            a = newNode;
        }
        
        first = first->next;
        second = second->next;
    }
    
    while(first){
        
        int dig1 = first->data;
        int val = (dig1+carry)%10;
        carry = (dig1+carry)/10;
        
        Node *newNode = new Node(val);
        
        if(!start){
            start = a = newNode;
        }else {
            a->next = newNode;
            a = newNode;
        }
        
        first = first->next;
    }
    
    while(second){
        int dig1 = second->data;
        int val = (dig1+carry)%10;
        carry = (dig1+carry)/10;
        
        Node *newNode = new Node(val);
        
        if(!start){
            start = a = newNode;
        }else {
            a->next = newNode;
            a = newNode;
        }
        
        second = second->next;
    }
    
    if(carry > 0){
        a->next = new Node(carry);
    }
    
    return reverse(start);
}
