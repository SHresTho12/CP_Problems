// https://leetcode.com/problems/maximum-subarray/description/?envType=study-plan&id=data-structure-i
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int len = nums.size();
        int sum = nums[0], max_sum = nums[0], temp = nums[0];
        for (int i = 1; i < len; i++)
        {
            // int temp = sum ;

            if (temp + nums[i] >= nums[i])
            {

                temp = temp + nums[i];
                if (max_sum < temp)
                {
                    max_sum = temp;
                }
            }
            else
            {
                temp = nums[i];
                if (max_sum < temp)
                {
                    max_sum = temp;
                }
            }
        }
        return max_sum;
    }
};
int main()
{
}