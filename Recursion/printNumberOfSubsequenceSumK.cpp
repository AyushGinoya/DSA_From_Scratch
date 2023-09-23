#include <bits/stdc++.h>
using namespace std;

int findSubarray(vector<int> &arr, vector<int> &ans, int n, int x, int index, int sum)
{
    if (sum == x)
    {
        return 1;
    }

    if (index == n)
    {
        return 0;
    }

    ans.push_back(arr[index]);
    sum = sum + arr[index];
    int l = findSubarray(arr, ans, n, x, index + 1, sum);
    ans.pop_back();
    sum = sum - arr[index];
    int r = findSubarray(arr, ans, n, x, index + 1, sum);

    return l + r;
}

int main()
{
    vector<int> arr = {1, 2, 1};
    vector<int> ans;
    int n = 3;
    int x = 2;

    cout << findSubarray(arr, ans, n, x, 0, 0);

    return 0;
}
