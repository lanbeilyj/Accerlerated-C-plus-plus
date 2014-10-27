#include <iostream>
#include "Vec.h"
using namespace std;

int main()
{
    Vec<int> v1,v3;
    Vec<int> v2(5,0);
    v1=v2;
    cout<<"v1: ";
    for(Vec<int>::const_iterator it=v1.begin();it!=v1.end();++it)
        cout<<*it<<" ";
    cout<<endl;
    cout<<"v2: ";
    for(Vec<int>::const_iterator it=v2.begin();it!=v2.end();++it)
        cout<<*it<<" ";
    cout<<endl;

    int n;
    while(cin>>n)
        v3.push_back(n);

    cout<<"v3: ";
    for(Vec<int>::const_iterator it=v3.begin();it!=v3.end();++it)
        cout<<*it<<" ";
    cout<<endl;

    return 0;
}
