#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <iomanip>
#define ll long long
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(min(a, b), min(c, d))
#define max4(a, b, c, d) max(max(a, b), max(c, d))
#define max5(a, b, c, d, e) max(max3(a, b, c), max(d, e))
#define min5(a, b, c, d, e) min(min3(a, b, c), min(d, e))
#define LCM(a, b) (a / __gcd(a, b)) * b
#define GCD(a, b) __gcd(a, b)
#define INPUT(x) freopen(x, "r", stdin)
#define OUTPUT(x) freopen(x, "w", stdout)
#define PI acos(-1.0)
#define SP(x, y) fixed << setprecision((y)) << (x)
#define joldi                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);

#define MAX 32000
#define fl(i, t) for (int i = 0; i < t; i++)

using namespace std;

bool compareFirstElement(const std::pair<int, int> &a, const std::pair<int, int> &b)
{
    return a.first < b.first;
}

int main()
{
    joldi int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        int a, b;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }

        sort(v.begin(), v.end(), compareFirstElement);

        int maxPos;

        if (v[0].second > 1)
        {

            int cell = (v[0].second - 1) / 2;
            maxPos = v[0].first + cell;
        }
        else
        {
            if (v[0].first != 1)
                maxPos = v[0].first;
            else
                maxPos = 1;
        }

        for (int i = 1; i < n; i++)
        {
            if (v[i].first > maxPos)
                break;
            if (v[i].second == 1)
            {
                if (v[i].first != 1)
                    maxPos = min(maxPos, v[i].first);
                else
                    maxPos = 1;
                break;
            }
            int cell;
            if (v[i].second % 2 == 0)
            {
                cell = (v[i].second - 1) / 2;
            }
            else
            {
                cell = v[i].second / 2;
            }

            maxPos = min(maxPos, v[i].first + cell);
        }
        cout << maxPos << endl;
    }
}
