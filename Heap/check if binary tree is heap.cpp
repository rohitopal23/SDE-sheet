bool isHeap(Node * tree)
{
    if(!tree){
        return true;
    }
    // Your code here
    if(tree->left && tree->left->data > tree->data){
        return false;
    }
    
    if(tree->right && tree->right->data > tree->data){
        return false;
    }
    
    return isHeap(tree->left) && isHeap(tree->right);
}
