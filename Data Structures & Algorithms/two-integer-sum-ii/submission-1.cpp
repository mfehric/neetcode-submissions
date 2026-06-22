class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int poc = 0;
        int kraj = n-1;
        while(poc < kraj){
            if(numbers[poc] + numbers[kraj] < target){
                poc++;
            }else if(numbers[poc]+ numbers[kraj] > target){
                kraj--;
            }else{
                return {poc+1,kraj+1};
            }
            
        }
        return {poc+1,kraj+1};
    }
};
