class Solution {
public:
    int search(vector<int>& nums, int target) {
        int poc = 0;
        int n = nums.size();
        int kraj = n-1;
        while(poc <= kraj){
            int mid = poc+(kraj-poc)/2;
            cout << mid << " ";
            if(nums[mid] > target){
                kraj = mid-1;
            }else if(nums[mid] < target){
                poc = mid+1;
            }else{
                return mid;
            }
        }
        return -1;
    }
};
