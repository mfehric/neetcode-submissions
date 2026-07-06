class MinStack {
public:

    stack<int> stek;
    stack<int> stek_min;
    MinStack(){
    }
    
    void push(int val) {
        if(stek_min.empty()){
            stek_min.push(val);
        }else{
            if(val <= stek_min.top()){
                stek_min.push(val);
            }
        }
        stek.push(val);

    }
    
    void pop() {

        if(stek_min.top() == stek.top()){
            stek_min.pop();
        }
        stek.pop();
    }
    
    int top() {
        return stek.top();
    }
    
    int getMin() {
        return stek_min.top();
    }
};
