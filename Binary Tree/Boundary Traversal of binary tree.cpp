
void getLeaves(Node *root, vector<int> &ans){
    if(!root){
        return;
    }
    
    getLeaves(root->left, ans);
    
    if(!root->right && !root->left){
        ans.push_back(root->data);
    }
    
    getLeaves(root->right, ans);
}

vector <int> printBoundary(Node *root)
{
     //Your code here
     if(!root){
         return {};
     }
     
     vector<int> ans;
     
     ans.push_back(root->data);
     
     Node *a=root->left;
     
     while(a && (a->left||a->right)){
         ans.push_back(a->data);
         
         if(a->left)    a=a->left;
         else   a = a->right;
     }
     
     getLeaves(root, ans);
     
     a = root->right;
     
     vector<int> temp;
     while(a && (a->right || a->left)){
         temp.push_back(a->data);
         
         if(a->right)a=a->right;
         else   a =a->left;
     }
     
     if(!temp.empty()){
         reverse(temp.begin(), temp.end());
     
         for(int u: temp){
             ans.push_back(u);
         }
     }
     
     
     return ans;
}
