class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mapa;
        for(auto& x: nums) mapa[x]++;
        vector<pair<int,int>> freq(mapa.begin(), mapa.end());
        sort(freq.begin(),freq.end(),[](const auto& a, const auto& b){return a.second > b.second;});
        vector<int> sol;
        for(int i = 0; i < k; i++){
            sol.push_back(freq[i].first);
        }
        return sol;
    }
};
