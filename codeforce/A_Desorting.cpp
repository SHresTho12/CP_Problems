#include <iostream>

using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int pos = 0;
        int diff = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0)
            {
                int temp = arr[i] - arr[i - 1];
                if (temp < diff)
                {
                    diff = temp;
                    pos = i;
                }
            }
        }
        cout < diff << endl;
    }
}