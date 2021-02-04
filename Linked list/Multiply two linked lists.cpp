long long  multiplyTwoLists (Node* l1, Node* l2)
{
    //Your code here
    
    Node *curl2=l2, *curl1=l1;
    ll num1=0, num2=0;
    
    while(l1){
        num1 = num1*10 + l1->data;
        num1%=1000000007;
        l1 = l1->next;
    }
    
    while(l2){
        num2 = num2*10 + l2->data;
        num2%=1000000007;
        l2 = l2->next;
    }
    
    return (num1*num2)%1000000007;
}
