#include<bits/stdc++.h>
using namespace std;

void findSubsequence(vector<int> &arr,vector<int> &ans,int n,int x,int index,int sum){
    if(index==n){
        if(sum==x){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }

    ans.push_back(arr[index]);
    sum=sum+arr[index];
    findSubsequence(arr,ans,n,x,index+1,sum);
    ans.pop_back();
    sum=sum-arr[index];
    findSubsequence(arr,ans,n,x,index+1,sum);
}
int main()
{
    vector<int> arr={1,2,1};
    vector<int> ans;
    int x = 2;    //target sum
    int n = 3;
    findSubsequence(arr,ans,n,x,0,0);
    return 0;
}
