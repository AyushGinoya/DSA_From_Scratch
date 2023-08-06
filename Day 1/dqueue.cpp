#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> q;

    q.push_back(1);
    q.push_back(2);
    q.push_back(3);
    q.push_front(30);
    q.push_front(20);
    q.push_front(10);

    for (int num : q) {
        cout << num << "    ";
    }

    cout << endl;

    q.pop_back();
    q.pop_front();

    for (int num : q) {
        cout << num << "    ";
    }

    cout << endl;

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.erase(q.begin(),q.begin()+1);

    for (int num : q) {
        cout << num << "    ";
    }

    cout << endl;

    return 0;
}
