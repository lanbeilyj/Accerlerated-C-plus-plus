#include "compare.h"
#include<cctype>
using namespace std;
#include <iostream>

bool comparef(const string x,const string y)
{
    typedef string::size_type size_tp;
    size_tp xsize=x.size(),ysize=y.size();
    size_tp i=0,j=0;

    string xx=x,yy=y;
    for(;i<xsize;++i)
    {
        if(isupper(xx[i]))
            xx[i]+=32;
    }
    for(;j<ysize;++j)
    {
        if(isupper(yy[j]))
            yy[j]+=32;
    }

    return xx<yy;
}
