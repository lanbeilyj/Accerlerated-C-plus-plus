#include <iostream>
#include <vector>
using namespace std;
template <class Y>
bool fun(Y& x)
{
    return *x<6;
}
template <class X>
void sw(X& x,X& y)
{
    X temp=x;
    x=y;
    y=temp;
}
template <class In>
In partition(In beg,In end,bool fun(In&))
{
    while(beg!=end)
    {
        while(fun(beg) && beg!=end)//find the last element which let fun return false;
        {
            ++beg;
            if(beg==end)
                return beg;
        }

        do{
            --end;
            if(beg==end)
                return beg;
        }while(!fun(end));

        sw(*beg,*end);
        ++beg;
    }
    return beg;
}
int main()
{
    vector<int> v;
    int n;
    while(cin>>n)
        v.push_back(n);
    cin.clear();
    cout<<"partition"<<endl;
    vector<int>::iterator mid=partition(v.begin(),v.end(),fun);

    cout<<"out1"<<endl;
    for(vector<int>::iterator it=v.begin();it!=mid;++it)
        cout<<*it<<" ";
    cout<<endl;

    cout<<"out2"<<endl;
    for(;mid!=v.end();++mid)
        cout<<*mid<<" ";
    cout<<endl;

    return 0;
}
