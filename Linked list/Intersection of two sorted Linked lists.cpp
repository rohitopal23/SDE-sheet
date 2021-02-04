

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node *a = head1, *b = head2, *start = NULL, *cur;
    
    while(a && b){
        Node *aNext = a->next, *bNext = b->next;
        
        if(a->data == b->data){
            if(!start){
                start = cur = a;
            }else{
                cur->next = a;
                cur = a;
            }
            cur->next = NULL;
            
            a = aNext; b = bNext;
        }
        
        else if(a->data > b->data){
            b = bNext;
        } else {
            a = aNext;
        }
    }
    return start;
}
