#include <bits/stdc++.h>
using namespace std;

bool findSubarray(vector<int> &arr, vector<int> &ans, int n, int x, int index, int sum)
{
    if (sum == x)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return true;
    }

    if (index == n)
    {
        return false;
    }

    ans.push_back(arr[index]);
    sum = sum + arr[index];
    if (findSubarray(arr, ans, n, x, index + 1, sum))
    {
        return true;
    }
    ans.pop_back();
    sum = sum - arr[index];

    return findSubarray(arr, ans, n, x, index + 1, sum);
}

int main()
{
    vector<int> arr = {1, 2, 1};
    vector<int> ans;
    int n = 3;
    int x = 2;

    if (!findSubarray(arr, ans, n, x, 0, 0))
    {
        cout << "No subarray found." << endl;
    }

    return 0;
}
