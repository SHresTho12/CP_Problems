// https://www.hackerearth.com/practice/codemonk/

#include <iostream>
#include <cmath>
using namespace std;

string shiftOnePosition(string s)
{

    // Shift all characters to the right by one position
    char c = s[0];
    // Shift all characters to the right by one position
    return s.substr(1, s.size()) + c;
    // Insert the first character at the end
}
int main()
{
    int test_count;
    cin >> test_count;

    while (test_count--)
    {
        long long int n, k;
        cin >> n >> k;
        string s;
        string max = " ";
        cin >> s;
        long long int pos, result = 0;
        long long int repeted = 0;
        for (int i = 0; i < n; i++)
        {
            if (s > max)
            {

                max = s;

                pos = i;
            }
            else if (s == max)
            {

                repeted = i - pos;
                break;
            }
            s = shiftOnePosition(s);
        }

        if (!repeted)
        {

            result = result + pos;

            result = (result + ((k - 1) * n));
        }
        else
        {
            result = result + pos;

            result = result + (k - 1) * repeted;
        }
        cout << result << endl;
    }
}