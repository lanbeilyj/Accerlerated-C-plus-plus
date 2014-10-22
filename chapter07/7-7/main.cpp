#include <iostream>
#include "xref.h"
#include "split.h"
using namespace std;

int main()
{
    map<string,vector<int> > ret=xref(cin,split);
    for(map<string,vector<int> >::const_iterator it=ret.begin();it!=ret.end();++it)
    {
        cout<<it->first;
        //====added
        if(it->second.size()>1)
            cout<<" occurs on lines:"<<endl;
        else
            cout<<" occurs on line:"<<endl;
        //=====
        vector<int>::const_iterator line_it=it->second.begin();
        cout<<*line_it;
        ++line_it;
        while(line_it!=it->second.end())
        {
            cout<<","<<*line_it;
            ++line_it;
        }
        cout<<endl;
    }
    return 0;
}
