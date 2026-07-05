class Solution {
public:
    vector<int> sol;
    vector<vector<int>> res;

    void generateCombination(vector<int>& nums, int target, int start){
        int n = nums.size();
        if(target == 0){
            res.push_back(sol);
        }else{
            for(int i = start; i < n; i++){
                cout << "i:  " << i << endl;
                if(target-nums[i]>= 0){
                    sol.push_back(nums[i]);
                    generateCombination(nums,target-nums[i],i);
                    sol.pop_back();
                }
                }
            }
        }
    

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        generateCombination(nums,target,0);
        return res;
        
    }
};
