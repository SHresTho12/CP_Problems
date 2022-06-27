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

using namespace std;

int main()
{
    joldi

        int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            array[i] = temp;
        }

        int start = 0, start2 = 1;
        int flag = 0;
        for (; start2 < n;)
        {
            if (array[start] > array[start2])
            {
                if (array[start] + array[start2] <= k)
                {
                    int temp = array[start2];
                    array[start2] = array[start];
                    array[start] = temp;
                    start2++;
                    start++;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                start++;
                start2++;
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
