
pair<int, int> getAns(Node *root){
    if(!root){
        return make_pair(0, 0);
    }
    
    pair<int, int> l = getAns(root->left), r = getAns(root->right);
    
    if(l.second > r.second){
        return make_pair(l.first+root->data, l.second+1);
    }else if(l.second < r.second){
        return make_pair(r.first+root->data, r.second+1);
    }
    return make_pair(max(r.first, l.first)+root->data, l.second+1);
    
}

int sumOfLongRootToLeafPath(Node* root)
{
	// Code here
	pair<int, int> ans = getAns(root);
	return ans.first;
}
