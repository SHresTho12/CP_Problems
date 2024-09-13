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

int main()
{
    joldi

        int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int arr[n][2];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {

                cin >> arr[i][j];
            }
        }

        int w = arr[0][0];
        int numOfCurls = arr[0][1];
        int flag = 0;
        int count = n - 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i][0] < w)
            {
                continue;
            }
            else if (arr[i][0] >= w)
            {
                if (arr[i][1] > numOfCurls)
                {
                    flag = 1;
                    break;
                }
                if (arr[i][1] == numOfCurls)
                {
                    count--;
                }
            }
        }

        if (flag == 0 && count > 0)
        {
            cout << w << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
