#include <iostream>
#include <vector>
using namespace std;
template <class In,class X>
X accumulate(In beg,In end,X x)
{
    while(beg!=end)
    {
        x+=*beg;
        ++beg;
    }
    return x;
}
int main()
{
    vector<int> v;
    int n;
    while(cin>>n)
        v.push_back(n);
    cin.clear();
    int sum=accumulate(v.begin(),v.end(),0);

    cout<<endl<<sum<<endl;

    return 0;
}
