#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int sz = nums.size() - 1;
        int l = sz - 1, r = sz;

        while (l >= 0 && nums[l] >= nums[l + 1])
        {
            l--;
        }

        if (l < 0)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            while (nums[l] >= nums[r])
            {
                r--;
            }

            swap(nums[l], nums[r]);
            reverse(nums.begin() + l + 1, nums.end());
        }
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> vect;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        vect.push_back(temp);
    }
    Solution sol;
    sol.nextPermutation(vect);
    for (int i = 0; i < n; i++)
    {
        cout << vect[i];
    }
}