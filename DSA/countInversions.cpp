// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long arr[], int l, int mid, int r)
    {
        long long inv = 0;
        int n1 = mid - l + 1;
        int n2 = r - mid;
        int a[n1];
        int b[n2];
        for (int i = 0; i < n1; i++)
        {
            a[i] = arr[l + i];
        }
        for (int i = 0; i < n2; i++)
        {
            b[i] = arr[mid + i + 1];
        }

        int i = 0, j = 0, k = l;
        while (i < n1 and j < n2)
        {
            if (a[i] <= b[j])
            {
                arr[k] = a[i];
                k++;
                i++;
            }
            else
            {
                arr[k++] = b[j++];
                inv += n1 - i;
            }
        }
        while (i < n1)
        {
            arr[k++] = a[i++];
        }
        while (j < n2)
        {
            arr[k++] = b[j++];
        }
        return inv;
    }

    long long mergeSort(long long arr[], int l, int r)
    {
        long long inversion = 0;

        if (l < r)
        {
            int mid = (l + r) / 2;

            inversion += mergeSort(arr, l, r);
            inversion += mergeSort(arr, mid + 1, r);
            inversion += merge(arr, l, mid, r);
        }
        return inversion;
    }
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code Here
        int l = 0, r = n - 1;
        long long inversion = mergeSort(arr, l, r);
        return inversion;
    }
};

// { Driver Code Starts.

int main()
{

    long long T;
    cin >> T;

    while (T--)
    {
        long long N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}
// } Driver Code Ends