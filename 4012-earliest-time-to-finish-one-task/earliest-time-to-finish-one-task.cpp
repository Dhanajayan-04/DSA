class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int n=tasks.size();
        int earliest = INT_MAX;

        for(int i=0;i<n;i++){
            int si = tasks[i][0];
            int ti = tasks[i][1];
            int finish_time = si + ti;
            earliest = min(earliest, finish_time);
        }
        return earliest;
    }
};