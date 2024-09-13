#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        int a[m];
        int smallest = 1000000000;
        int largest = 0;

        vector<int> odd;
        vector<int> even;
        vector<int> result;

        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
            if (a[i] < smallest)
            {
                smallest = a[i];
            }
            if (a[i] > largest)
            {
                largest = a[i];
            }

            if (a[i] % 2 == 0)
            {
                even.push_back(a[i]);
            }
            else
            {
                odd.push_back(a[i]);
            }
        }
        if (m == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        if (a[0] % 2 == 0 && smallest % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        if (a[0] % 2 != 0 && smallest % 2 == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        for (int i = 0; i < m; i++)
        {
            if (a[i] % 2 == 0)
            {
                int temp = even[0];
                result.push_back(temp);
                even.erase(even.begin());
            }
            else
            {
                int temp = odd[0];
                result.push_back(temp);
                odd.erase(odd.begin());
            }
        }
        int flag = 0;
        // check if result is sorted or not
        for (int i = 0; i < m - 1; i++)
        {
            if (result[i] > result[i + 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}