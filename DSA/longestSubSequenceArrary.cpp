// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr[] : the input array
    // N : size of the array arr[]

    // Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        // Your code here
        int flag[100001] = {0};
        int len = N;
        for (int i = 0; i < len; i++)
        {
            flag[arr[i]] = 1;
        }

        int result = 1, temp = 0;
        for (int i = 0; i < 100001; i++)
        {
            if (flag[i] > 0)
            {
                temp = temp + flag[i];
                if (temp > result)
                    result = temp;
            }
            else
            {

                temp = 0;
            }
        }
        return result;
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t, n, i, a[100001];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.findLongestConseqSubseq(a, n) << endl;
    }

    return 0;
} // } Driver Code Ends