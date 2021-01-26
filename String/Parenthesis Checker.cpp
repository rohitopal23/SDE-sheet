bool ispar(string x)
{
    // Your code here
    stack<int>s;
    
    for(char ch: x){
        if(ch == '{' || ch == '(' || ch == '['){
            s.push(ch);
        } else {
            if(s.empty()){
                return false;
            }
            
            if((ch == ']' && s.top()!='[')
                || (ch == '}' && s.top()!='{')
                || (ch == ')' && s.top()!='(')){
                    return false;
                }
            s.pop();
        }
    }
    
    return s.empty();
    
}
