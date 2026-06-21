class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //prefix and suffix;
        int n = nums.size();
        vector<int> prefix(nums.size(),1);
        vector<int> sufix(nums.size(),1);
        for(int i = 0; i < nums.size(); i++){
            if(i-1>= 0)
                prefix[i] = nums[i-1]*prefix[i-1];
        }
        
        for(int i = n-1; i >= 0; i--){
            if(i+1 <= nums.size()-1)
                sufix[i] = nums[i+1] * sufix[i+1];

        }
        vector<int> sol(nums.size(),1);
        for(int i = 0; i < n; i++){
            sol[i] = prefix[i]*sufix[i];
        }
        return sol;
    }
};
