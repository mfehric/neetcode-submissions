class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int freq[101] = {};
        int n = nums.size();
        for(int i = 0; i < n; i++){
            freq[nums[i]]++;
        }
        long long ans = 0;
        for(int i = 0; i < 101; i++){
            if(freq[i] >= 2)
            ans += (freq[i]*(freq[i]-1))/2;
        }
        return ans;
    }
};