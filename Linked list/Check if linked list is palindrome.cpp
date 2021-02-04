
Node *reverse(Node *head, Node *end){
    Node *upNext, *cur=head, *prev=end;
    
    while(cur && cur != end){
        upNext = cur->next;
        cur->next = prev;
        prev = cur;
        cur = upNext;
    }
    
    return prev;
}

/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    //Your code here
    if(!head->next){
        return true;
    }
    
    Node *slow=head, *fast=head;
    
    while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    
    
    Node *first = reverse(head, slow), *second;
    
    
    if(!fast){
        second = slow; 
    }else{
        second = slow->next;
    }
    
    while(first && second && first != slow){
        if(first->data != second->data){
            return false;
        }
        
        first=first->next;
        second=second->next;
    }
    
    return true;
}

