
void insert(stack<int>&s, int val){
    if(s.empty() || s.top() <= val){
        s.push(val);
        return;
    }
    
    int temp = s.top();
    s.pop();
    
    insert(s, val);
    s.push(temp);
}

void SortedStack :: sort()
{
   //Your code here
   if(s.empty()){
       return;
   }
    int val = s.top();
    s.pop();
    
    sort();
    insert(s, val);
}
