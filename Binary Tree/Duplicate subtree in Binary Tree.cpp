string preOrder(Node *root, map<string, int>& mp){
    if(!root){
        return "";
    }
    
    string s = "";
    s += root->data;
    s += preOrder(root->left, mp);
    s += preOrder(root->right, mp);
    
    if(s.size()>1)
    mp[s]++;
    return s;
}

bool dupSub(Node *root)
{
     //your code here
     map<string, int> mp;
     preOrder(root, mp);
     
     for(auto it: mp){
         if(it.second > 1){
             return true;
         }
     }
     
     return false;
}
