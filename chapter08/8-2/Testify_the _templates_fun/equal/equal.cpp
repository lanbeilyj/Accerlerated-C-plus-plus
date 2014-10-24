#include <iostream>
#include <vector>
using namespace std;
template <class In>
bool equal(In beg,In end,In beg2)//[b,e)序列与第二个序列等长
{
    while(beg!=end)
    {
        if(*beg!=*beg2)
        {
            return false;
        }
        ++beg;
        ++beg2;
    }
    return true;
}
int main()
{
    vector<int> v,v2;
    int n;
    while(cin>>n)
    {
        v.push_back(n);
        v2.push_back(n);
    }
    cin.clear();

    if(equal(v.begin(),v.end(),v2.begin()))
        cout<<"equal"<<endl;
    else
        cout<<"not"<<endl;

    return 0;
}
