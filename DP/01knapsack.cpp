#include <bits/stdc++.h>
using namespace std;

const int n = 3;
const int W = 50;
int t[n + 1][W + 1] = {{0}};

int main()
{
    int values[] = {60, 100, 120};
    int weights[] = {10, 20, 30};

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < W + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                t[i][j] = 0;
            }
            else if (weights[i - 1] <= j)
            {
                t[i][j] = max(values[i - 1] + t[i - 1][j - weights[i - 1]], t[i - 1][j]);
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }

    cout << t[n][W] << endl;

    return 0;
}
