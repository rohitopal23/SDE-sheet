bool isCircular(Node *head)
{
   // Your code here
   Node *slow=head, *fast=head;
   
   while(slow && fast && fast->next){
       slow = slow->next;
       fast = fast->next->next;
       
       if(slow == fast){
           return true;
       }
   }
   return false;
}

