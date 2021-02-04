Node *merge(Node *a, Node *b) {
    if(!a){
        return b;
    }
    if(!b){
        return a;
    }
    
    Node *result = new Node(0);
    
    if(a->data < b->data){
        result->data = a->data;
        result->bottom = merge(a->bottom, b);
    }else {
        result->data = b->data;
        result->bottom = merge(a, b->bottom);
    }
    
    return result;
    
}    
    
    
Node *flatten(Node *root)
{
   // Your code here
   if(!root || !root->next){
       return root;
   }
   
   return merge(root, flatten(root->next));
}
