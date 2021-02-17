Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   if(!root){
       return NULL;
   }
   
   int a = min(n1, n2), b = max(n1, n2);
   
   if(a <= root->data && root->data <= b){
       return root;
   }
   
   if(a < root->data){
       return LCA(root->left, a, b);
   }
   return LCA(root->right, a, b);
}

