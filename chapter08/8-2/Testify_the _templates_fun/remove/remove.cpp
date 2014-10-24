#include <iostream>
#include <vector>
using namespace std;
template <class X>
void sw(X& x,X& y)
{
    X temp=x;
    x=y;
    y=temp;
}

template <class In,class X>
In remove(In begin,In end,X& x)
{
    while(begin!=end)
    {
        if(*begin==x)
        {
            --end;
            while(*end==x)
                --end;

            sw(*begin,*end);
        }
        ++begin;
    }
    return end;
}
int main()
{
    vector<int> v;
    int n;
    while(cin>>n)
        v.push_back(n);
    cin.clear();
    cout<<"m:"<<endl;
    typedef vector<int>::iterator iter;
    iter b=v.begin(),e=v.end();
    int m;
    cin>>m;
    cout<<"remove"<<endl;
    iter k=remove(b,e,m);
    cout<<"output"<<endl;
    for(iter i=v.begin();i!=k;++i)
        cout<<*i<<" ";
    cout<<endl;
    return 0;
}
