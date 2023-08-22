#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int ct=0;

    for(int i=0;i<6;i++){
        for(int j=i;j<6;j++){
            for(int k=i;k<j;k++){
                cout<<arr[k]<<" ";
            }
            ct++;
            cout<<endl;
        }
    }

    cout<<ct;

    return 0;
}
