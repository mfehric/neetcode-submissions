/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end(), [](Interval a, Interval b){
            return a.start < b.start;
        });
        vector<Interval> sol;
        if(n != 0){
            sol.push_back(intervals[0]);
        }
        for(int i = 1; i < n; i++){
            int m = sol.size();
            if(intervals[i].start >= sol[m-1].end){
                sol.push_back(intervals[i]);
            }else{
                return false;
            }
        }
        return true;
    }
};
