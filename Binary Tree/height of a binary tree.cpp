class Solution{
    public:
    int height(struct Node* root){
        // code here 
        if(!root){
            return 0;
        }
        
        return max(height(root->left), height(root->right))+1;
    }
};
