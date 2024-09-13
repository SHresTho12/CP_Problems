#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

const int MAXN = 10; // maximum value of N
int N;
int matrix[MAXN][MAXN];
unordered_set<int> used;

bool isValid(int i, int j, int val)
{
    // check if the value is already used in the same row or column
    for (int k = 0; k < N; k++)
    {
        if (matrix[i][k] == val || matrix[k][j] == val)
        {
            return false;
        }
    }
    // check if the value is already used in the same 3x3 subgrid
    int si = (i / 3) * 3, sj = (j / 3) * 3;
    for (int k = si; k < si + 3; k++)
    {
        for (int l = sj; l < sj + 3; l++)
        {
            if (matrix[k][l] == val)
            {
                return false;
            }
        }
    }
    return true;
}

bool solve(int i, int j)
{
    if (i == N)
    {
        return true; // all cells are filled
    }
    int ni = i + (j + 1) / N, nj = (j + 1) % N;
    if (matrix[i][j] != 0)
    {
        // if the cell is already filled, move to the next cell
        return solve(ni, nj);
    }
    for (int val = 1; val <= N * N; val++)
    {
        if (used.count(val) == 0 && isValid(i, j, val))
        {
            matrix[i][j] = val;
            used.insert(val);
            if (solve(ni, nj))
            {
                return true;
            }
            used.erase(val);
            matrix[i][j] = 0;
        }
    }
    return false; // no value can be filled in this cell
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> N;
        solve(0, 0);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
