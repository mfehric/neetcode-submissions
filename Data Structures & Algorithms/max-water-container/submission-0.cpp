class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int poc = 0;
        int kraj = n-1;
        int ans = 0;
        while(poc < kraj){
            ans = max(ans,(kraj-poc)*min(heights[poc],heights[kraj]));
            if(heights[poc] > heights[kraj]){
                kraj--;
            }else{
                poc++;
            }
        }
        return ans;
    }
};
