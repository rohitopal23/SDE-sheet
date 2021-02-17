vector<int>v[100001];

void traverse(Node *root, int dia){
    if(!root){
        return;
    }
    
    v[dia].push_back(root->data);
    
    traverse(root->left, dia+1);
    traverse(root->right, dia);
}

vector<int> diagonal(Node *root)
{
   // your code here
   for(int i=0; i<100001; i++){
       v[i].clear();
   }
   
   traverse(root, 0);
   vector<int> ans;
   
   for(int i=0; i<100001; i++){
       for(int u: v[i]){
           ans.push_back(u);
       }
   }
   
   return ans;
}
