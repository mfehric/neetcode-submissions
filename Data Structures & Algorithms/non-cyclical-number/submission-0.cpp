class Solution {
public:

    int kvadrati(int n){
        int suma = 0;
        while(n != 0){
            suma += (n%10)*(n%10);
            n /= 10;
        }
        return suma;
    }

    bool isHappy(int n) {
        unordered_set<int> skup;
        while(kvadrati(n) != 1){
            if(skup.find(kvadrati(n)) == skup.end()){
            skup.insert(kvadrati(n));
            }else{
                return false;
        }
        n = kvadrati(n);
        }
        return true;
        
    }
};
