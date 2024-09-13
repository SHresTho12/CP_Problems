#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        n = (-1 + sqrt(1 + 8 * n)) / 2;
        cout << n << endl;
    }
}