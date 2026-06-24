class Solution {
public:


    int operacija(int x, int y, string s){
        if(s == "+"){
            return x+y;
        }else if(s == "-"){
            return y-x;
        }else if(s == "*"){
            return x*y;
        }else{
            return y/x;
        }
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        //stack<int> spremnik;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "/" && tokens[i] != "*"){
                s.push(stoi(tokens[i]));
            }else{
                int x = s.top();
                s.pop();
                int y = s.top();
                s.pop();
                s.push(operacija(x,y,tokens[i]));
            }
            
        }
        return s.top();
    }
};
