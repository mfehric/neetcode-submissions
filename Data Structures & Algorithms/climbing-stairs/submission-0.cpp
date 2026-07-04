class Solution {
public:
    int climbStairs(int n) {
        //n == 1
        int a = 1;
        //n == 2;
        int b = 2;
        if(n == 1){
            return a;
        }else if(n == 2){
            return b;
        }else{
            for(int i = 3; i <= n; i++){
                int temp = b;
                b = a+b;
                a = temp;
            }
            return b;
        }
    }
};
