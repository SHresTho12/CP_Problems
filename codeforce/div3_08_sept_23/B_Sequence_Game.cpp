#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;

        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        vector<int> a;
        a.push_back(b[0]);

        for (int i = 1; i < m; i++)
        {
            if (b[i] > b[i - 1])
            {
                a.push_back(b[i - 1]);
            }
        }

        cout << a.size() << endl;
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}
