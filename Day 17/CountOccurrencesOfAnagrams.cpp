#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "forxxorfxdofr";
    string ptr = "for";

    map<char,int> m;

    for(auto c:ptr){
        m[c]++;
    }

    int ans=0;
    int ct=m.size();
    int j=0;
    int i=0;
    int n=s.length();
    int k=ptr.length();

    while(j<n){
        m[s[j]]--;
        if(m[s[j]]==0){
            ct--;
        }
        if(j - i + 1 < k){
            j++;
        } else if( j - i + 1 == k){
            if(ct==0){
                ans++;
            }
            if(m[s[i]] == 0){
                ct++;
            }
            m[s[i]]++;
            i++;
            j++;
        }
    }

    cout<<ans<<endl;

    return 0;
}
