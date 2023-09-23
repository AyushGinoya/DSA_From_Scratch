#include<bits/stdc++.h>
using namespace std;

void nNumber(int n,int i){

    if(i>n){
        return;
    }
    cout<<i<<endl;
    for(int digit=0;digit<=9;digit++){
        if(n>=i*10+digit)
        nNumber(n,i*10+digit);
    }
}

int main()
{
    int n=137;
    for(int i=1;i<=9;i++){
        nNumber(n,i);
    }
    return 0;
}
