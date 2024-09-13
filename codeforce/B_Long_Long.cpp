#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdint>

using namespace std;

pair<int64_t, int> maxSumAndMinOperations(vector<int> &arr)
{
    int n = arr.size();
    int64_t maxSum = 0;
    int countNegatives = 0;
    int64_t minNeg = INT64_MAX;

    int64_t totalOps = 0;
    int64_t minNegOps = INT64_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            countNegatives++;
            arr[i] = -arr[i];
        }

        maxSum += arr[i];
        minNeg = min(minNeg, (int64_t)arr[i]);

        if (countNegatives % 2 == 0)
        {
            minNegOps = min(minNegOps, totalOps);
        }
        totalOps++;
    }

    if (countNegatives % 2 == 0)
    {
        return make_pair(maxSum, 0);
    }
    else
    {
        return make_pair(maxSum - (2 * minNeg), minNegOps);
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
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        pair<int64_t, int> result = maxSumAndMinOperations(arr);
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
