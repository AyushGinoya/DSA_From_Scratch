#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> maxi;
    priority_queue<int,vector<int>,greater<int>> mini;

    maxi.push(20);
    maxi.push(200);
    maxi.push(120);
    maxi.push(2);
    maxi.push(10);

    int n = maxi.size();

    for(int i=0;i<n;i++){
        cout<<maxi.top()<<"  ";
        maxi.pop();
    }

    mini.push(20);
    mini.push(210);
    mini.push(201);
    mini.push(2);
    mini.push(1);
    mini.push(30);
    cout<<endl;

    int m = mini.size();

    for(int i=0;i<m;i++){
        cout<<mini.top()<<"  ";
        mini.pop();
    }
    cout<<endl;

    return 0;
}
