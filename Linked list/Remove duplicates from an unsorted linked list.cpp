Node * removeDuplicates( Node *head) 
{
    // your code goes here
    if(!head || !head->next){
        return head;
    }
    
    Node *prev = head, *cur = head;
    unordered_set<int> s;
    s.insert(prev->data);
    
    while(cur){
        if(s.find(cur->data) != s.end()){
            prev->next = cur->next;
        }else{
            prev = cur;
            s.insert(cur->data);
        }
        cur = cur->next;
    }
    
    return head;
}
