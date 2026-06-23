class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<vector<int>> sol;
        for(int i  = 0; i < n-1; i++){
            int poc = i+1;
            int kraj = n-1;
            while(poc < kraj){
                if(nums[i] + nums[poc] + nums[kraj] > 0){
                    //cout << i << " " << poc << kraj << endl;
                    kraj--;
                }else if(nums[i] + nums[poc] + nums[kraj] < 0){
                    //cout << i << " " << poc << kraj << endl;
                    poc++;
                }else{
                   // cout << i << " " << poc << kraj << endl;
                    sol.insert({nums[i],nums[poc],nums[kraj]});
                    poc++;
                }
            }

        }
        vector<vector<int>> res(sol.begin(),sol.end());
        return res;
    }
};
