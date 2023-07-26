#include <iostream>
#include <algorithm> // for std::sort

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int arr[num];
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + num);
        int costsum = 0;
        int numberOfCollor = num / 2; // corrected 'length' to 'num'
        for (int i = 0, j = num - 1; i < numberOfCollor; i++, j--)
        { // corrected 'n' to 'num'
            costsum += arr[j] - arr[i];
        }
        cout << costsum << endl;
    }
    return 0; // added return statement
}
