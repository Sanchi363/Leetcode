class Solution {
public:
    bool isValid(string s) {
        stack<char>c;
        c.push(-1);
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                c.push(s[i]);
            }
            else if(c.top()=='('&&s[i]==')'){
                c.pop();
            }
            else if(c.top()=='['&&s[i]==']'){
                c.pop();
            }
            else if(c.top()=='{'&&s[i]=='}'){
                c.pop();
            }
            else{
                c.push(s[i]);
            }
        }
        if(c.top()==-1){
            return true;
        }
        return false;
    }
};
