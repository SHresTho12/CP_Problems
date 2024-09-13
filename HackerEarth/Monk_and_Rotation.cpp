// #include <iostream>
// using namespace std;
// // function to rotate the elements of a array k times to the right of the
// // array
// void rotate(int arr[], int n, int k)
// {
// }

// int main()
// {
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         int num, rotate;
//         cin >> num >> rotate;
//         int in[num];
//         for (int i = 0; i < num; i++)
//         {
//             int temp;
//             cin >> temp;
//             int pos = (i + rotate) % num;
//             in[pos] = temp;
//         }
//         // int temp[num];
//         // for (int i = 0; i < num; i++)
//         // {
//         //     temp[(i + rotate) % num] = in[i];
//         // }
//         // for (int i = 0; i < num; i++)
//         // {
//         //     in[i] = temp[i];
//         // }

//         for (int i = 0; i < num; i++)
//         {
//             cout << in[i] << " ";
//         }
//     }
// }

#include <iostream>
#include <algorithm>

using namespace std;

void rotate_array(int arr[], int n, int k)
{
    // First, we'll reverse the entire array
    reverse(arr, arr + n);
    // Then, we'll reverse the first k elements
    reverse(arr, arr + k);
    // Finally, we'll reverse the remaining elements
    reverse(arr + k, arr + n);
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int num, rotate;
        cin >> num >> rotate;
        int arr[num];
        for (int i = 0; i < num; i++)
        {
            int temp;
            cin >> temp;
            arr[i] = temp;
        }
        rotate_array(arr, num, rotate);

        for (int i = 0; i < num; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

      return 0;
}
