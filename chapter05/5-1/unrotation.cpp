#include "unrotation.h"
#include <iostream>
using namespace std;

vector<string> unrotation(const vector<string>& v)
{
    vector<string> unrot;
    typedef string::size_type size_tp;
    string k1="fox";
    string k2="fence";

    for(vector<string>::const_iterator it=v.begin();it!=v.end();++it)
    {
        string key,s,s1,left,right;
        string str=*it;
        size_tp i,m,n;

        i=found(str,k1,k2,key);
        m=key.size();
        n=str.size();

        //right
        right=str.substr(0,m+i);

        //left
        if(i==n)
            s1.assign(n,' ');
        else
            s1.assign(n-m+i,' ');

        left=s1+str.substr(i+m,n-m-i);
        s=left+"\t"+right;

        unrot.push_back(s);
    }
    return unrot;
}
