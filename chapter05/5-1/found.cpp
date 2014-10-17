#include "found.h"
using namespace std;

string::size_type found(const string& s,string& k1,string& k2,string& key)
{
    typedef string::size_type size_tp;
    size_tp f1,f2;
    f1=s.find(k1);//string.find(key),没有找到,则返回string所能表示的最大值
    f2=s.find(k2);

    if(f1<f2)
    {
        key=k1;
        return f1;
    }
    if(f2<f1)
    {
        key=k2;
        return f2;
    }
}
