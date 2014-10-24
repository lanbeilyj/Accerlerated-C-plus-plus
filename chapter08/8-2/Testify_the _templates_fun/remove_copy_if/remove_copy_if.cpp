#include <iostream>
#include <vector>
using namespace std;
template <class X>
bool fun(const X& x)
{
    return *x>10;
}

template <class In,class Out>
Out remove_copy_if(In begin,In end,Out dest,bool fun(const In&))
{
    while(begin!=end)
    {
        if(!fun(begin))
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

    back_insert_iterator<vector<int> > d(v2);
    cout<<"function"<<endl;
    remove_copy_if(v.begin(),v.end(),d,fun);
    cout<<"cout"<<endl;
    for(vector<int>::iterator i=v2.begin();i!=v2.end();++i)
        cout<<*i<<" ";
    cout<<endl;
    return 0;
}

