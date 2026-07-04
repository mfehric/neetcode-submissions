class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b){return a[0] < b[0];});
        vector<vector<int>> merged_intervals;
        int n = intervals.size();
        for(int i = 0; i < n; i++){
            int m = merged_intervals.size();
            if(merged_intervals.size() == 0){
                merged_intervals.push_back(intervals[i]);
            }else{
                if(intervals[i][0] > merged_intervals[m-1][1]){
                    merged_intervals.push_back(intervals[i]);
                }else{
                    merged_intervals[m-1][1] = max(intervals[i][1], merged_intervals[m-1][1]);
                }
            }
        }
        return merged_intervals;
    }
};
