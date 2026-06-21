class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mapa;
        for(int i = 0; i < nums.size(); i++){
            if(mapa.count(target-nums[i]) && mapa[target-nums[i]] != i){
                return {mapa[target-nums[i]],i};
            }
            //add nums[i], i
            //check target-nums[i] exist and j != i;
            mapa[nums[i]] = i;
            
        }

    }
};
