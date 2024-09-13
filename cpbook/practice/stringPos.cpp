#include <iostream>
using namespace std;

int main()
{
    string s;
    string p;
    getline(cin, s);
    getline(cin, p);
    // find all the space separated casse ssensitive p in s

    int pos = s.find(p);
    while (pos != string::npos)
    {
        cout << pos << endl;
        pos = s.find(p, pos + 1);
    }
    cout << -1 << endl;
}