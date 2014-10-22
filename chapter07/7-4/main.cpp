#include <iostream>
#include "xref.h"
#include "split.h"
using namespace std;

int main()
{
    map<string,vector<int> > ret=xref(cin,split);
    for(map<string,vector<int> >::const_iterator it=ret.begin();it!=ret.end();++it)
    {
        cout<<it->first<<" occurs on line(s):"<<endl;
        vector<int>::const_iterator line_it=it->second.begin();
        vector<int>::size_type size=it->second.size();//added a clause here
        cout<<*line_it;
        ++line_it;
        while(line_it!=it->second.end())
        {
            cout<<","<<*line_it;
            if(size%10==0)//added here
                cout<<endl;
            ++line_it;
        }
        cout<<endl;
    }
    return 0;
}
