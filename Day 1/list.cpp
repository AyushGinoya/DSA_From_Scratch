#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;    //list<int> l(5,100) is also valid
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(30);
    l.push_front(20);
    l.push_front(10);

    for (int num : l) {
        cout << num << "    ";
    }

    cout << endl;

    l.erase(l.begin());

    cout<<l.front()<<endl;
    cout<<l.back()<<endl;

    for (int num : l) {
        cout << num << "    ";
    }

    cout << endl;

    cout<<l.size()<<endl;

    return 0;
}
