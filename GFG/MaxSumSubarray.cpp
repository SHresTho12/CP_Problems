//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
//  } Driver Code Ends
class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        // code here
        long long sum = 0;
        long long tempSum = 0;
        int j = K;
        for (int i = 0; i < K; i++)
        {
            sum += Arr[i];
            tempSum += Arr[i];
        }
        if (N == K)
            return sum;
        for (int i = 1; i < N - K + 1; i++)
        {

            tempSum = tempSum - Arr[i - 1] + Arr[j];
            if (tempSum > sum)
            {
                sum = tempSum;
            }
            j++;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        ;
        vector<int> Arr;
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K, Arr, N) << endl;
    }
    return 0;
}
// } Driver Code Ends