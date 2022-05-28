#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> mergedIntervals;
        // if we are not given any intervals, then we are going to return an empty ans
        if (intervals.size() == 0)
            return mergedIntervals;
        // if intervals array has intervals in it then, firstly we will sort them
        sort(intervals.begin(), intervals.end());
        // instead of taking pair we will take vector and we will put first index of intervals in it
        vector<int> tempInterval = intervals[0];
        // linearly traverse in intervals
        for (auto it : intervals)
        {
            // if intervals are merging
            if (it[0] <= tempInterval[1])
                // here, index 0 means left element of the pair
                // and index 1 means right element of the pair
                tempInterval[1] = max(it[1], tempInterval[1]);
            // if intervals are not merging
            else
            {
                // put the resultant of consecutive intervals into mergedIntervals
                mergedIntervals.push_back(tempInterval);
                // reassign the value of tempInterval
                tempInterval = it;
            }
        }
        // push back last resultant interval into mergedIntervals
        mergedIntervals.push_back(tempInterval);
        // return ans
        return mergedIntervals;
    }
};

int main()
{
}