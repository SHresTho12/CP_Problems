// { Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k)
    {
        // Your code here
        map<int, int> result;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            result.insert(pair<int, int>(arr[i], 0));
        }
        for (int i = 0; i < n; i++)
        {
            result[arr[i]] = result[arr[i]]++;
        }

        map<int, int>::iterator itr;
        for (itr = result.begin(); itr != result.end(); ++itr)
        {
            if (itr->second >= n / k)
                res++;
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t, k;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++)
            cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends