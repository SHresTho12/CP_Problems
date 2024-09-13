#include <iostream>
#include <string>
using namespace std;

int CardValues(string s)
{
    int value = 0;
    if (s[0] >= '2' && s[0] <= '9')
    {
        value = s[0] - '0';
    }
    else
    {
        value = 10;
    }
    return value;
}

int main()
{

    int t;
    cin >> t;
    int testCase = 1;
    while (t--)
    {
        string cards[52];
        for (int i = 0; i < 52; i++)
        {
            cin >> cards[i];
        }

        int y = 0;
        int top = 26;
        int i = 3;
        while (i--)
        {

            int x = CardValues(cards[top]);

            y += x;
            top -= (10 - x + 1);
        }

        if (y <= top)
        {
            cout << "Case " << testCase << ":" << cards[y] << endl;
        }
        else
        {
            cout << "Case " << testCase << ":" << cards[26 + y - top - 1] << endl;
        }
        testCase++;
    }
}