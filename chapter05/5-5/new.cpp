//new.cpp
#include "new.h"
using namespace std;

typedef string::size_type size_tp;
string::size_type maxlen(const vector<string>& vec)
{
    size_tp maxlen=0;
    for(vector<string>::size_type i=0;i<vec.size();++i)
    {
        size_tp n=vec[i].size();
        maxlen=maxlen<n?n:maxlen;
    }
    return maxlen;
}

vector<string> center(const vector<string>& vec)
{
    size_tp width=maxlen(vec);
    vector<string> new_vec;

    for(vector<string>::size_type i=0;i<vec.size();++i)
    {
        size_tp size=width-vec[i].size();
        size_tp mid=size/2;
        string str;
        if(size%2==0)
        {
            string star(mid,'*');
            str=star+vec[i]+star;
            new_vec.push_back(str);
        }
        else
        {
            str=string(mid,'*')+vec[i]+string(mid+1,'*');
            new_vec.push_back(str);
        }
    }
    return new_vec;
}