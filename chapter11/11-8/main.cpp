#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    List<int> v1,v2,v3;

    int n;
    while(cin>>n)
        v1.push_back(n);

    cout<<"v1: ";
    for(List<int>::iterator it=v1.begin();it!=v1.end();++it)
        cout<<*it<<" ";
    cout<<endl;

    cin.clear();
    while(cin>>n)
        v3.push_back(n);

    cout<<"v3: ";
    for(List<int>::iterator it=v3.begin();it!=v3.end();++it)
        cout<<*it<<" ";
    cout<<endl;


    v2=v1;
    cout<<"v2: ";
    for(List<int>::iterator it=v2.begin();it!=v2.end();++it)
        cout<<*it<<" ";
    cout<<endl;




    return 0;
}
