#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=6;
    int n = pow(2,num);
    int arr[num]={1,2,3,4,5,6};

    for(int i=0;i<(1<<num);i++){    // it goes 0 to n
        for(int j=0;j<num;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
