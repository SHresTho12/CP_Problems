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
#define for(i, t) for (int i = 0; i < t; i++)

using namespace std;

int main()
{
    joldi ll m;
    cin >> m;

    double c = 1 - m;

    double det = 25 - 48 * c;

    double x1 = abs((5 + sqrt(det)) / 24);
    // double x2 = (5 - sqrt(det)) / (24);
    // if (x1 > 0 && x2 > 0)
    // {
    //     double res = min(x1, x2);
    //     cout << fixed << setprecision(6) << res << endl;
    // }
    // else if (x1 > 0 && x2 < 0)
    // {
    //     cout << fixed << setprecision(6) << x1 << endl;
    // }
    // else
    // {
    cout << fixed << setprecision(6) << x1 << endl;
}
