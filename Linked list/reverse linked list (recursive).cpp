struct Node *reverse(struct Node *head, struct Node *next){
    
    if(!head){
        return head;
    }
    
    struct Node *realNext = head->next;
    head->next = next;
    
    if(!realNext){
        return head;
    }
    
    return reverse(realNext, head);
}

struct Node* reverseList(struct Node *head)
{
    // code here
    return reverse(head, NULL);
    // return head of reversed list
}
