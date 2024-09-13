// c++ program to take 2d array input
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }
        int flag = 0;
        for (int i = 0; i < 8; i++)
        {
            if (a[i][0] == 'R')
            {
                for (int j = 0; j < 8; j++)
                {
                    if (a[i][j] == 'R')
                    {
                        flag++;
                    }
                    else
                    {
                        flag = 0;
                    }
                }
            }
            else
            {
                continue;
            }
        }
        if (flag == 8)
        {
            cout << "R" << endl;
        }
        else
            cout << "B" << endl;
    }
    return 0;
}