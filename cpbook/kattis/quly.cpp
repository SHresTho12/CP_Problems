#include <iostream>

using namespace std;
int main()
{
    int num = 0;
    cin >> num;
    double result = 0;
    while (num--)
    {
        double a, b;
        cin >> a >> b;
        result += a * b;
    }
    cout << result << endl;
}