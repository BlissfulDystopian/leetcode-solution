class Solution {
public:
    bool isValid(string s){
        stack<char> ss;
        int x = s.length();
        for(int i = 0; i < x; i++) {
    	    if(s[i] == '(' || s[i] == '{' || s[i] == '[') ss.push(s[i]);
            else if(ss.empty() && (s[i] != '(' || s[i] != '{' || s[i] != '[')) return false;
            else {
                if(ss.top() == '(' && s[i] == ')') ss.pop();
                else if(ss.top() == '{' && s[i] == '}') ss.pop();
                else if(ss.top() == '[' && s[i] == ']') ss.pop();
                else return false;
            }
        }    
        return ss.empty();
    }
};
