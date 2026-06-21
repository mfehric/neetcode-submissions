class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //RJSENJE PREKO FREQ ARRAY+SORTIRANJE
       /* unordered_map<int,int> mapa;
        for(auto& x: nums) mapa[x]++;
        vector<pair<int,int>> freq(mapa.begin(), mapa.end());
        sort(freq.begin(),freq.end(),[](const auto& a, const auto& b){return a.second > b.second;});
        vector<int> sol;
        for(int i = 0; i < k; i++){
            sol.push_back(freq[i].first);
        }
        return sol;*/

        //RJESENJE PREKO BUCKET SORTA
        unordered_map<int,int> mapa;
        vector<vector<int>> freq(nums.size()+1);
        for(int x: nums){
            mapa[x]++;
        }
        for(const auto& x : mapa){
            freq[x.second].push_back(x.first);
        }
        vector<int> sol;
        for(int i = freq.size()-1; i > 0; i--){
            for(int n : freq[i]){
                sol.push_back(n);
                if(sol.size() == k)
                    return sol;
            }
        }
        return sol;


    }
};
