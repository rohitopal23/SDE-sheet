void reverse(queue<int> &q){
    if(!q.empty()){
        int val = q.front();
        q.pop();
        reverse(q);
        q.push(val);
    }
}

queue<int> rev(queue<int> q)
{
    // add code here.
    reverse(q);
    return q;
}
