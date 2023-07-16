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
    joldi int t;
    cin >> t;
    while (t--)
    {

        char a[3][3];
        for (int i = 0; i < 3; i++)
        {
            /* code */
            for (int j = 0; j < 3; j++)
            {
                /* code */
                cin >> a[i][j];
            }
        }
        char res = '.';

        for (int i = 0; i < 3; i++)
        {
            if (a[i][0] != '.' && (a[i][0] == a[i][1] && a[i][1] == a[i][2]))
            {
                res = a[i][0];
                break;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (a[0][i] != '.' && (a[0][i] == a[1][i] && a[0][i] == a[2][i]))
            {
                res = a[0][i];
                break;
            }
        }

        if (a[0][0] != '.' && (a[0][0] == a[1][1] && a[0][0] == a[2][2]))
        {
            res = a[0][0];
        }
        if (a[0][2] != '.' && (a[0][2] == a[1][1] && a[0][2] == a[2][0]))
        {
            res = a[0][2];
        }

        if (res == '.')
        {
            cout << "DRAW" << endl;
        }
        else
        {
            cout << res << endl;
        }
    }
}