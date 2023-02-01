// c++ template
#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // take three number input c++
        int a, b, c;
        cin >> a >> b >> c;
        // find largest of three numbers

        if (a + b == c)
        {
            cout << "YES" << endl;
        }
        else if (b + c == a)
        {
            cout << "YES" << endl;
        }
        else if (a + c == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}