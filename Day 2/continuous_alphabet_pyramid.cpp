#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=65;
    int n=5;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<(char)num<<" ";
            num++;
        }
        cout<<endl;     
    }

    return 0;
}