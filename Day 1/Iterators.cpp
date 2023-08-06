#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v={1,2,3,4,5,6,7};
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << "     ";
    }
    cout << endl << endl;

    vector <int>::iterator it;
    for(it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "     ";
    }
    cout << endl << endl;

    vector<pair<int, int>> v_p = {{1,2},{3,4},{5,6}};

    for(auto &it1 : v_p)
    {
        cout << it1.first << "     " << it1.second << endl;
    }

    pair<int, int> x = {4, 5};
    cout << x.first << "     " << x.second << endl;

    return 0;
}
