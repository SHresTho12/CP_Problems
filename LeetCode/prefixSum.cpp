// https://leetcode.com/problems/running-sum-of-1d-array/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int len = nums.size();
        if (len > 1)
        {
            for (int i = 1; i < len; i++)
            {
                nums[i] = nums[i] + nums[i - 1];
            }
        }
        return nums;
    }
};