#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="hiii my name is ayush ginoya";

    int n=str.length();
    int ans=0;
    int len=0;

    for(int i=0;i<n;i++){
        if(str[i]!=' '){
            len++;
        }else{
            ans=max(ans,len);
            len=0;
        }
    }

    ans=max(ans,len);
    
    cout<<ans<<endl;
    return 0;
}
