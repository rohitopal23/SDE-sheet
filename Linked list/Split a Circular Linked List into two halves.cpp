
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    if(!head){
        return;
    }
    
    if(!head->next){
        *head1_ref = head;
        return;
    }
    
    Node *a = head, *b = head, *prev;
    *head1_ref = a;
    
    a=a->next;
    b=b->next->next;
    
    
    while(b!=head && b->next!=head){
        //cout<<a->data<<" "<<b->data<<"\n";
        prev = a;
        a=a->next;
        b=b->next->next;
        
    }
    
    
    if(b == head){
        a = prev;
    }
    
    b = a->next;
    a->next = head;
    
    Node *temp = b;
    *head2_ref = b;
    
    
    while(b->next!=head){
        b=b->next;
    }
    
    b->next = temp;
    
}
