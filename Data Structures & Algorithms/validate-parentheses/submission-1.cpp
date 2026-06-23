class Solution {
public:
    bool isValid(string s) {
        stack<char> stek;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '[' || s[i] == '{' || s[i] == '('){
                stek.push(s[i]);
            }else if(s[i] == ']' && !stek.empty() && stek.top() == '['){
                stek.pop();
            }else if(s[i] == '}' && !stek.empty() && stek.top() == '{'){
                stek.pop();
            }else if(s[i] == ')' && !stek.empty() && stek.top() == '('){
                stek.pop();
            }else{
                return false;
            }
        }
        if(stek.empty()){
            return true;
        }else{
            return false;
        }
        
    }
};
