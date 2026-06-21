class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<vector<int>,vector<string>> mapa;
        int n = strs.size();
        for(int i = 0; i < n; i++){
            vector<int> freq(26,0);
            for(int j = 0; j < strs[i].size(); j++){
                freq[strs[i][j]-'a']++;
            }
            mapa[freq].push_back(strs[i]);
        }
        vector<vector<string>> sol;
        for(const auto& x : mapa){
            sol.push_back(x.second);
        }
        return sol;
    }
};
