#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> a >> b >> c;
    cin >> n;

    if (n < 3)
    {
        cout << "NO" << endl;
        return 0;
    }
    if (a >= 1 && b >= 1 && c >= 1 && a + b + c >= n)
    {

        cout << "YES" << endl;
        return 0;
    }
    else
        cout << "NO" << endl;
}