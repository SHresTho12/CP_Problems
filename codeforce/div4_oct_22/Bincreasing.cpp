// cpp program to see if a array can be arranged in increasing order

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                count = 0;
                break;
            }
            else if (a[i] < a[i + 1])
            {
                count = 1;
            }
        }
        if (n == 1)
        {
            count = 1;
        }
        if (count == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}