#include <iostream>

using namespace std;

int main()
{
    string s;
    string temp;

    freopen("input.txt", "r", stdin);

    while (getline(cin, temp))
    {

        string first7char = temp.substr(0, 7);
        if (first7char == ".......")
        {
            s += temp;
            break;
        }
        s += temp;

        s += ' ';
    }

    cout << s << endl;
}