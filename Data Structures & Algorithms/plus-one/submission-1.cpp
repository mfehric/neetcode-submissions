class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        bool preljevanje = true;
        for(int i = 0; i < n; i++){
            if(digits[i] != 9){
                preljevanje = false;
                break;
            }
        }
        if(preljevanje){
            for(int i = 0;  i < n; i++){
                if(i != 0){
                    digits[i] = 0;
                }else{
                    digits[i] = 1;
                }
            }
            digits.push_back(0);
            return digits;
        }else{
            int carry = 0;
            if(digits[n-1]+1+carry >= 10){
                digits[n-1] = (digits[n-1]+1+carry)%10;
                carry = 1;
            }else{
                digits[n-1] = digits[n-1]+1+carry;
            }
            
            
            for(int i = n-2; i >= 0; i--){
                if(digits[i]+carry >= 10){
                    digits[i] = (digits[i]+carry)%10;
                }else{
                    digits[i] += carry;
                    break;
                }
            }
            return digits;
        }
    }
};
