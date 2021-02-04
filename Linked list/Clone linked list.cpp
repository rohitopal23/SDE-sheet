Node *copyList(Node *head) {
    // Your code here
    map<Node*, Node*>mp;
    
    Node *a = head, *start=NULL, *cur=NULL;
    
    while(a){
        Node *res = new Node(a->data);
        
        if(!start){
            start = cur = res;
        }else{
            cur->next = res;
            cur = res;
        }
        
        mp[a] = res;
        a=a->next;
    }
    
    a=head;
    cur=start;
    
    while(a){
        if(a->arb){
            cur->arb = mp[a->arb];
        }
        a=a->next;
        cur=cur->next;
    }
    return start;
    
}
