
void removeLoop(Node* head)
{
    // code here
    // just remove the loop without losing any nodes
    Node *fast=head, *slow=head;
    
    while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast){
            break;
        }
    }
    
    if(slow == fast){
        slow = head;
        
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        while(fast->next != slow){
            fast = fast->next;
        }
        
        fast->next = NULL;
    }
}
