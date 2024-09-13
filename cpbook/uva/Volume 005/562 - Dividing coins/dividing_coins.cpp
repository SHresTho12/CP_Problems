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
#define fl(t) for (int i = 0; i < t; i++)

using namespace std;

int knapSack(int n, int weight, int coins[])
{
    int dp[n + 1][weight + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= weight; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (coins[i - 1] <= j)
            {
                dp[i][j] = max(coins[i - 1] + dp[i - 1][j - coins[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][weight];
}

int main()
{
    joldi int t;
    cin >> t;
    while (t--)
    {
        int numberOfCoins;
        cin >> numberOfCoins;
        int coins[numberOfCoins];
        int sum = 0;
        fl(numberOfCoins)
        {
            cin >> coins[i];
            sum += coins[i];
        }
        int half = sum / 2;
        sort(coins, coins + numberOfCoins);

        cout << abs(sum - 2 * knapSack(numberOfCoins, half, coins)) << endl;
    }
}
