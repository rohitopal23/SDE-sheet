
class Solution {
public:
    int inorderSuccesor(TreeNode *a){
        int ans=0;
        while(a){
            ans = a->val;
            a=a->left;
        }
        return ans;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root){
            return root;
        }
        
        if(root->val > key){
            root->left = deleteNode(root->left, key);
        }else if(root->val < key){
            root->right = deleteNode(root->right, key);
        }else{
            if(!root->left){
                TreeNode *tmp = root->right;
                delete(root);
                return tmp;
            }
            
            if(!root->right){
                TreeNode *tmp = root->left;
                delete(root);
                return tmp;
            }
            
            root->val = inorderSuccesor(root->right);
            root->right = deleteNode(root->right, root->val);
            
        }
        
        return root;
    }
};
