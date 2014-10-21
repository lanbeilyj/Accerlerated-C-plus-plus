#include "split.h"
#include <cctype>
#include <algorithm>
using namespace std;

bool space(char c)
{
    return isspace(c);
}

bool not_space(char c)
{
    return !isspace(c);
}

vector<string> split(const string& s)
{
    vector<string> ret;
    typedef string::const_iterator iter;
    iter i=s.begin(),e=s.end();
    while(i!=e)
    {
        i=find_if(i,e,not_space);
        iter j=find_if(i,e,space);
        if(i!=e)
            ret.push_back(string(i,j));
        i=j;
    }
    return ret;
}
