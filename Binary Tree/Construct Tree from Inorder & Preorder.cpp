int pos;

Node *buildTreeUtil(int *in, int *pre, int l, int r){
    if(l>r){
        return NULL;
    }
    
    int i;
    for(i=l; i<=r; i++){
        if(in[i] == pre[pos]){
            break;
        }
    }
    
    Node *res = new Node(pre[pos++]);
    
    res->left = buildTreeUtil(in, pre, l, i-1);
    res->right = buildTreeUtil(in, pre, i+1, r);
    
    return res;
}

Node* buildTree(int in[],int pre[], int n)
{
    //add code here.
    pos = 0;
    return buildTreeUtil(in, pre, 0, n-1);
}
