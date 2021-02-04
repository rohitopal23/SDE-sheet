Node *removeDuplicates(Node *head)
{
    // your code goes here
    if(!head || !head->next){
        return head;
    }
    
    Node *prev = head, *cur = head;
    
    while(cur){
        if(cur->data == prev->data){
            prev->next = cur->next;
        }else{
            prev = cur;
        }
        cur = cur->next;
    }
    
    return head;
}
