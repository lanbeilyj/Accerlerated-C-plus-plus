#include <iostream>
#include <vector>
using namespace std;
template <class In>
In search(In b,In e,In b2,In e2)
{
    int k=0;
    In start;
    while(b2!=e2)
    {
        while(b!=e)
        {
            if(k==0 && *b==*b2)
            {
                start=b;
                ++b;
                ++k;
                break;
            }
            else if(*b==*b2)
            {
                ++b;
                break;
            }
            ++b;
        }
        ++b2;
    }

    return start;
}
int main()
{
    cout<<"v1:"<<endl;
    vector<int> v1;
    int n;
    while(cin>>n)
        v1.push_back(n);
    cin.clear();

    cout<<endl<<"v2:"<<endl;
    vector<int> v2;
    while(cin>>n)
        v2.push_back(n);
    typedef vector<int>::const_iterator iter;
    iter b=v1.begin(),e=v1.end();
    iter b2=v2.begin(),e2=v2.end();
    iter a=search(b,e,b2,e2);
    for(iter i=v1.begin();i!=v1.end();++i)
    {
        if(i==a)
            cout<<"the v2 is begin in v1's: "<<*a<<endl;
    }
    return 0;
}

