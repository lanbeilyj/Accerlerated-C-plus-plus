#include <iostream>
#include <vector>
using namespace std;
template <class In,class Out,class X>
Out remove_copy(In begin,In end,Out dest,const X& x)
{
    while(begin!=end)
    {
        if(*begin!=x)
            *dest++=*begin;

        ++begin;
    }
    return dest;
}
int main()
{
    vector<int> v,v2;
    int n;
    while(cin>>n)
        v.push_back(n);
    cin.clear();

    int m;
    cin>>m;
    back_insert_iterator<vector<int> > d(v2);
    remove_copy(v.begin(),v.end(),d,m);

    for(vector<int>::iterator i=v2.begin();i!=v2.end();++i)
        cout<<*i<<" ";
    cout<<endl;
    return 0;
}
