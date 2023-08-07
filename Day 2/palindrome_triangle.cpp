#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int ct=0;

    for(int i=1;i<=n;i++){
        ct=i;
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=(i);k++){
            cout<<ct;
            ct++;
        }
        ct--;
        for(int k=0;k<i-1;k++){
            ct--;
            cout<<ct;
        }
         for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
