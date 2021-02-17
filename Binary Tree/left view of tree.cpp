void traverse(Node *root, vector<int>&ans, int level){
    if(!root){
        return;
    }
    
    if(ans.size() <= level){
        ans.push_back(root->data);
    }else{
        ans[level] = root->data;
    }
    
    traverse(root->right, ans, level+1);
    
    ans[level] = root->data;
    
    traverse(root->left, ans, level+1);
}


vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   traverse(root, ans, 0);
   return ans;
}

