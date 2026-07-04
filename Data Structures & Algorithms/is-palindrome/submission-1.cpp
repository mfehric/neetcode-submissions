class Solution {
public:

    string alphanumeric(string s){
        string sol = "";
        for(int i = 0; i < s.length(); i++){
            if((s[i] >= 'a' && s[i] <= 'z') ||(s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
                if(s[i] >= 'A' && s[i] <= 'Z'){
                    sol+=(s[i]+32);
                }else{
                    sol+=s[i];
                }
                
        }
        return sol;
    }
    bool isPalindrome(string s) {
        string novo = alphanumeric(s);
        int n = novo.size();
        int poc = 0;
        int kraj = n-1;
        cout << novo;
        while(poc < kraj){
            if(novo[poc] != novo[kraj]){
                return false;
            }
            poc++;
            kraj--;
        }
            
        
        return true;
    }
};
