#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int result = (((((n * 567) / 9) + 7492) * 235) / 47) - 498;
        result = result / 10;
        cout << abs(result % 10) << endl;
    }
}