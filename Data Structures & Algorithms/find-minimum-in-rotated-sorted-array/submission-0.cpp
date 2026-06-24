class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int poc = 0;
        int kraj = n-1;
        int mid = 0;
        while(poc <= kraj){
            mid = poc + (kraj-poc)/2;
            if(nums[mid]  > nums[kraj]){
                poc = mid+1;
            }else if(nums[mid] < nums[kraj]){
                kraj = mid;
            }else{
                return nums[mid];
            }
        }
        return nums[mid];
    }
};
