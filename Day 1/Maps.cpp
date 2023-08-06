#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)
{
    cout<<"size="<<m.size()<<endl<<endl;   //0(log(n))
    for(auto &a : m)
    {
        cout<<a.first<<"  "<<a.second<<endl;
    }
}

void print1(map<string,string> &m1)
{
     for(auto &r : m1)
    {
        cout<<r.first<<"    "<<r.second<<endl;  //0(log(n))*s.size()
    }
}
int main()
{
    map<int , string> m;
    //m[1]="Ayush";
    //m[1].insert("Ayush");
    m[4]="Deep";
    m[7]="Raj";
    m[3]="Rinkal";
    m[10]="Rinu";
    m[8];
    m[13]="Rinkal";

    auto it1=m.find(13);
    //m.erase(13);
    if(it1 !=m.end())
    {
        m.erase(it1);               //0(log(n))
    }
    auto it=m.find(10);             //0(log(n))
    //auto it=m.find(100);
    if(it==m.end())
    {
        cout<<"No Value"<<endl;
    }
    else
    {
        cout<<endl<<it->first<<"   "<<it->second<<endl<<endl;;
    }
    print(m);

    for(int i=0;i<7;i++)
    {
        cout<<endl;
    }
    map <string,string> m1;
    m1["AYUSH"]="AYUSHI";
    m1["DEEP"]="DEEPALI";

    print1(m1);
    cout<<endl;
    return 0;
}
