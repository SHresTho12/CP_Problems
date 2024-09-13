// https://leetcode.com/problems/contains-duplicate/description/?envType=study-plan&id=data-structure-i
#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        if (s.size() != nums.size())
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
}

// Alternate solution
// 1. Sort the array using sort function
// 2. Check if the adjacent elements are same
// 3. If yes, return true
// 4. Else return false
// 5. Time complexity: O(nlogn)
// 6. Space complexity: O(1)
