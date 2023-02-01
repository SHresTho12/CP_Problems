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

#define f(i, t) for (int i = 0; i < t; i++)

using namespace std;
const int MOD = 1000000007;
const int MAX = 1000001;
bool prime[MAX];

void sieve()
{
    int i, j;
    prime[0] = prime[1] = true;

    for (i = 4; i < MAX; i += 2)
        prime[i] = true;

    for (i = 3; i * i <= MAX; i += 2)
        if (!prime[i])
            for (j = i * i; j < MAX; j += 2 * i)
                prime[j] = true;
}

int main(void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */
    sieve();

    int tc;
    ll n, r;

    cin >> tc;

    while (tc--)
    {
        cin >> n;

        r = sqrt(n);

        if (!prime[r] && r * r == n)
            cout << "YES\n";
        else
            cout << "NO" << endl;
    }

    return 0;
}