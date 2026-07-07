class Solution {
public:
    int search(vector<int>& nums, int target) {
        // 3 4 5 6 || 1 2
        int n = nums.size();
        int poc = 0;
        int kraj = n-1;
        while( poc <= kraj){
            int mid = poc + (kraj-poc)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] > nums[kraj] && target > nums[mid]){
                poc = mid+1;
            }else if(nums[mid] > nums[kraj] && target < nums[mid]){
                    if(target >= nums[poc]){
                        kraj = mid-1;
                    }else{
                        poc = mid+1;
                    }
            }else if(nums[mid] <= nums[kraj] && target <= nums[kraj]){
                if(target < nums[mid]){
                    kraj = mid-1;
                }else{
                    poc = mid+1;
                }
            }else if(nums[mid] <= nums[kraj] && target > nums[kraj]){
                kraj = mid-1;
            }
        }
        return -1;
    }
};
