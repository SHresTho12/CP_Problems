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
    joldi int tc;
    cin >> tc;
    while (tc--)
    {
        int n;

        cin >> n;
        string str;
        cin >> str;
        int start = 0;
        int end = 0;
        int maxLen = 0;
        int firstZero = -1;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                firstZero = i;
                break;
            }
        }

        for (int i = firstZero; i < n; i++)
        {
            if (str[i] == '1')
            {
                int tempLen = 0;
                int j = i;

                while (str[j] == '1' && j < n)
                {
                    tempLen++;
                    j++;
                }
                if (tempLen > maxLen)
                {
                    maxLen = tempLen;
                    start = i;
                    end = j - 1;
                    i = j;
                }
                end = i - 1;
            }
        }
        if (firstZero == -1)
        {
            cout << n << endl;
        }
        else if (firstZero == 0)
        {
            cout << maxLen << endl;
        }

        else
        {

            cout << maxLen + firstZero << endl;
        }
    }
}
