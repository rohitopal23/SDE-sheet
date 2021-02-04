
void add(Node *a, Node *type, Node *cur){
    if(type == NULL){
        type = cur = a;
    }else{
        cur->next=a;
        cur=a;
    }
    a->next=NULL;
    cout<<a->data<<" ";
}

class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node *even=NULL, *e=NULL, *odd=NULL, *o=NULL;
        
        Node *a = head;
        
        while(a){
            Node *upNext = a->next;
            if(a->data % 2 == 0){
                if(even == NULL){
                    even = e = a;
                }else{
                    e->next=a;
                    e=a;
                }
                a->next=NULL;
            }else{
                if(odd == NULL){
                    odd = o = a;
                }else{
                    o->next=a;
                    o=a;
                }
                a->next=NULL;
            }
            a = upNext;
        }
        
        if(even && odd){
            e->next=odd;
            //cout<<'m';
            return even;
        }else if(even){
            //cout<<'x';
            return even;
        }
        //cout<<'l';
        return odd;
    }
};
