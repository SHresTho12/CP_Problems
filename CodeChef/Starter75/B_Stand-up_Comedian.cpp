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

        int a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3 >> a4;
        int alice = a1;
        int bob = a1;
        int jokes = a1;
        if (a1 == 0 && a2 == 0 && a3 == 0)
        {
            jokes = 1;
        }
        else if (a2 == 0 && a3 == 0 && a4 == 0)
        {
            jokes = a1;
        }
        else if (a1 == 0)
        {
            jokes = 1;
        }
        else if (a1 > 0)
        {
            if (a2 >= a1 && a3 >= a1)
            {
                a2 = a2 - a1;
                a3 = a3 - a1;
                jokes = jokes + a1 * 2;
                if (alice > bob)
                {
                    if (a3 > alice)
                    {
                        jokes = jokes + (a3 - alice);
                        alice = alice - (a3 - alice);
                        bob = bob + (a3 - alice);
                    }
                }
            }
            else if (a2 >= a1 && a3 < a1)
            {
                jokes = jokes + a3;
                alice = alice - a3;
                bob = bob + a3;
                if (a2 >= bob)
                {
                    jokes = jokes + bob + 1;
                }
                else
                {
                    jokes = jokes + a2;
                    bob = bob - a2;
                    if (a4 > min(alice, bob))
                    {
                        jokes = jokes + min(alice, bob) + 1;
                    }
                    else
                    {
                        jokes = jokes + a4 + 1;
                    }
                }
            }
            else if (a2 < a1 && a3 >= a1)
            {
                jokes = jokes + a2;
                bob = bob - a2;
                alice = alice + a2;
                if (a3 >= alice)
                {
                    jokes = jokes + alice + 1;
                }
                else
                {
                    jokes = jokes + a3;
                    alice = alice - a3;
                    if (a4 > min(alice, bob))
                    {
                        jokes = jokes + min(alice, bob) + 1;
                    }
                    else
                    {
                        jokes = jokes + a4 + 1;
                    }
                }
            }
            else
            {
                jokes = jokes + a2 + a3;
                alice = alice - a3;
                bob = bob - a2;
                if (a4 > min(alice, bob))
                {
                    jokes = jokes + min(alice, bob) + 1;
                }
                else
                {
                    jokes = jokes + a4 + 1;
                }
            }
        }
        cout << jokes << endl;
    }
}
