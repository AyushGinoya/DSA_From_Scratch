#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v;

    v.push_back(1);
    cout<<"capacity="<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity="<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity="<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"capacity="<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"capacity="<<v.capacity()<<endl;

    for(int num : v){
        cout<<num<<"    ";
    }

    cout<<endl;

    v.pop_back();

    for(int num : v){
        cout<<num<<"    ";
    }
    cout<<endl;
    cout<<"at position 3 = "<<v.at(3)<<endl;

    cout<<"front = "<<v.front()<<endl;
    cout<<"Back = "<<v.back()<<endl;

    cout<<v.size()<<endl;
    v.clear();
    cout<<v.size()<<endl;
    
    return 0;
}