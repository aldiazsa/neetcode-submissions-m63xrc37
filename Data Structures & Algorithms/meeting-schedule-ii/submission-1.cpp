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
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<int> start, end;
        int s =0;
        int e =0;
        int cnt =0;
        int res =0;

        for(const auto& interval : intervals){
            start.push_back(interval.start);
            end.push_back(interval.end);
        }

        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        while(s < intervals.size()){
            if (start[s] < end[e]){
                s+=1;
                cnt+=1;
            } else {
                e+=1;
                cnt-=1;
            }
            res = max(cnt, res);
        }
        return res;
    }
};
