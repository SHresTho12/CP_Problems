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
#define f(i, t) for (int i = 0; i < t; i++)

using namespace std;

bool compare(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b)
{
    if (a.first != b.first)
    {
        return a.first > b.first; // Sort by problems solved in descending order
    }
    else
    {
        return a.second.first < b.second.first; // Sort by penalty in ascending order if there is a tie
    }
}

int main()
{
    joldi

        int t;
    cin >> t;
    while (t--)
    {

        int n, m, h;
        // create a priority queue
        cin >> n >> m >> h;
        vector<pair<int, pair<int, int>>> v;

        for (int participants = 0; participants < n; participants++)
        {
            int a[m];
            for (int i = 0; i < m; i++)
            {
                cin >> a[i];
            }
            sort(a, a + m);
            int time = 0;
            int penalty = 0;
            int problem = 0;
            for (int i = 0; i < m; i++)
            {
                int temp = penalty + a[i];
                time = time + a[i];
                if (time > h)
                {
                    break;
                }
                else
                {
                    penalty = penalty + temp;

                    problem++;
                }
            }
            v.push_back(make_pair(problem, make_pair(penalty, participants + 1)));
        }

        // now sort the map based on problem solved and if there is tie then sort based on penalty

        // Sort the vector based on problems solved and penalty
        sort(v.begin(), v.end(), compare);

        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << endl;
        // }
        // Find the position of participant 1
        int position = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].second.second == 1)
            {
                position = i + 1; // Add 1 since positions start from 1, not 0
                break;
            }
        }

        cout << position << endl;
    }
}
