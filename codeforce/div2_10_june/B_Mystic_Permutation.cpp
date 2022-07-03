#include <bits/stdc++.h>
using namespace std;
int nextPermutation(vector<int> &nums)
{
    int len = nums.size(), flag = 0;
    int sz = 0; // nums.size() - 1;
    int l = sz + 1, r = sz;

    while (l < len && nums[l] >= nums[l - 1])
    {
        l++;
    }

    if (l >= len)
    {
        flag = 1;
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
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        nextPermutation(nums);
    }
}
