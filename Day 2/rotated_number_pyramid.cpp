#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int ct=1;

    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<i+1;k++){
            cout<<ct;
            ct++;
        }
        cout<<endl;
        ct=i+1;
    }

    return 0;
}
