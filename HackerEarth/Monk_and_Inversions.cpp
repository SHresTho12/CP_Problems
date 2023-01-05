#include <iostream>
using namespace std;
int mismatch(int arr[], int n)
{
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp++;
        }
    }
    return temp;
}

int main()
{
    int test_count = 0;
    cin >> test_count;
    while (test_count--)
    {
        int n;
        int temp = 0;
        cin >> n;
        int arr[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = i; k < n; k++)
                {
                    for (int l = j; l < n; l++)
                    {
                        if (arr[i][j] > arr[k][l])
                        {
                            temp++;
                        }
                    }
                }
            }
        }

        cout << temp << endl;
    }
}