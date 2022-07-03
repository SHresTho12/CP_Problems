#include <iostream>
#include <String>
using namespace std;
int main(int argc, char **argv)
{
    int a, b, n;
    cin >> a >> b >> n;
    bool flag(false);

    for (int i = 0; i < 10; i++)
    {
        if ((a * 10 + i) % b == 0)
        {
            cout << a * 10 + i;
            string s(n - 1, '0');
            cout << s << endl;
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << -1 << endl;
    }
}