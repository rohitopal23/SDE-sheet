
Node* lca(Node* root ,int n1 ,int n2 )
{
   //Your code here 
   if(!root){
       return NULL;
   }
   
   Node *l, *r;
   
   if(root->data == n1 || root->data == n2){
       return root;
   }
   
   l = lca(root->left, n1, n2);
   r = lca(root->right, n1, n2);
   
   if(l && r){
       return root;
   }
   
   return (l != NULL)? l : r;
}
