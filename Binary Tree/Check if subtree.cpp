bool isSubTree(Node* T, Node* S) {
    // Your code here
    // return 1 if S is subtree of T else 0
    if(!T && !S){
        return true;
    }
    if(!T || !S){
        return false;
    }
    
    if(T->data == S->data){
        return (isSubTree(T->left, S->left) && isSubTree(T->right, S->right)) || 
        isSubTree(T->left, S) || isSubTree(T->right, S);
    }
    
    return isSubTree(T->left, S) || isSubTree(T->right, S);
    
}
