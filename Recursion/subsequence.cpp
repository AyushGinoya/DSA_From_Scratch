#include <bits/stdc++.h>
using namespace std;

void subsequence(vector<int> arr, int n, int index, vector<int> ans) {
    if (index >= n) {
        if(ans.size()==0){
            cout<<"[ ]"<<endl;
        }
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    ans.push_back(arr[index]);
    subsequence(arr, n, index + 1, ans);
    ans.pop_back();
    subsequence(arr, n, index + 1, ans);
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> ans;
    
    subsequence(arr, 3, 0, ans);
    return 0;
}
