
Node* reverseDLL(Node * head)
{
    //Your code her
    
    Node *cur = head;
    
    while(1){
        
        Node* temp = cur->next;
        cur->next = cur->prev;
        cur->prev = temp;
        
        if(!temp){
            break;
        }
        
        cur = temp;
        
    }
    return cur;
}

