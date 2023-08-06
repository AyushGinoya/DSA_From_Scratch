#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(10);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);

    for (int num : s) {
        cout << num << "    ";
    }

    cout << endl;

    cout<<"-5 is present or not : "<<s.count(-5)<<endl;

    auto it = s.begin();
   //it++;

    cout<<*it<<endl;

    auto it1 = s.find(11);      //The find() function is used to search for the element with value 11 in the set. Since 11 is not present in the set, the find() function returns s.end()

    if(it1 != s.end()){
        cout << *it1 << endl;
    } else{
        cout<<"not found"<<endl;
    }

    return 0;
}
