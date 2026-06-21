class Solution {
public:

    string encode(vector<string>& strs) {
        string sol = "";
        int n = strs.size();
        for(int i = 0; i < n; i++){
            sol+=to_string(strs[i].size());
            sol+="#";
            for(int j = 0; j < strs[i].size(); j++){
                sol+=strs[i][j];
            }
        }
        return sol;
    }

    vector<string> decode(string s) {
        int n = s.length();
        vector<string> sol;
        for(int i = 0; i < n; i++){
            string res = "";
            int pok = i;
            while(s[pok]>='0' && s[pok] <= '9'){
                pok++;
            }
            int length = stoi(s.substr(i,pok-i));
            i = pok+1;
            for(int j = i; j < i+length; j++){
                res+=s[j];
            }
            sol.push_back(res);
            i = i+length-1;
        }
        return sol;
        
    }
};
