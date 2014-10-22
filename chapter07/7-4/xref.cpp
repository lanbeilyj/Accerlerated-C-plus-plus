#include "xref.h"
#include <algorithm>
#include <iostream>
using namespace std;

map<string,vector<int> > xref(istream& in,vector<string> find_words(const string& s))
{
    string line;
    int line_number=0;
    map<string,vector<int> > ret;

    while(getline(in,line))
    {
        ++line_number;
        vector<string> words=find_words(line);

        typedef vector<string>::const_iterator iter;
        iter i=words.begin();
        while(i!=words.end())
        {
            iter j=i;
            ++j;
            bool k=false;//设置标志，指示该元素是否与后继元素有重复
            for(;j!=words.end();++j)
            {
                if(*i==*j)
                    k=true;
            }
            //不重复则添加，重复则进行下一轮循环，即从该元素后一个元素进行判断，最后总会得到添加
            if(!k)
                ret[*i].push_back(line_number);
            ++i;
        }
    }
    return ret;
}
