class Solution {
public:
    vector<int> sol;
    vector<vector<int>> res;
    //indeks koji smo obradili i hocemo li uzeti subset
    void backtrack(vector<int>& nums,int start){
        
        int n = nums.size();
        if(start == n){
            res.push_back(sol);
            return;
        }
            backtrack(nums,start+1);
            sol.push_back(nums[start]);
            backtrack(nums,start+1);
            sol.pop_back();

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(nums,0);

        return res;
    }
};
