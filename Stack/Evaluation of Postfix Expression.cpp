
class Solution{
    public:
    // The main function that returns value of a given postfix expression
    int cal(int x, int y, int ch){
        if(ch == '+'){
            return x+y;
        }
        if(ch == '/'){
            return x/y;
        }
        if(ch == '-'){
            return x-y;
        }
        return x*y;
    }
    
    
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int>s;
        
        for(char ch: S){
            if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
                int x = (s.top());
                s.pop();
                int y = (s.top());
                s.pop();
                
                //cout<<cal(y, x, ch)<<" ";
                
                s.push(cal(y, x, ch));
            }else{
                s.push(ch-'0');
            }
        }
        return s.top();
    }
};
