class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0){
            return 0;
        }
        double stepen = x;
        double sol = 1;
        int temp;
        bool negativan = false;
        if(n > 0){
            temp = n;
        }
        if(n < 0){
            temp = -n;
            negativan = true;
        }
        while(temp != 0){
            cout << "NESOT\n";
            if(1&(temp)){
                cout << stepen<< "\n";
                sol *= stepen;
            }
            stepen *= stepen;
            temp = temp>>1;
        }
        if(negativan){
            return 1/sol;
        }else{
            return sol;
        }
    }
};
