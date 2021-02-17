int minValue(Node* root)
{
    // Code here
    int mini, maxi;
    Node *a = root;
    
    while(a){
        mini = a->data;
        a=a->left;
    }
    return mini;
}

