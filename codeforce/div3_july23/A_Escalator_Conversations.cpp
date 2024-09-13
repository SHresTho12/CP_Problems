#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, h;
        cin >> n >> m >> k >> h;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int maxDiff = (m - 1) * k;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if ((abs(a[i] - h) <= maxDiff) && (abs(a[i] - h) % k == 0) && (abs(a[i] - h) != 0))
            {
                count++;
            }
        }
        cout << count << endl;
    }
}