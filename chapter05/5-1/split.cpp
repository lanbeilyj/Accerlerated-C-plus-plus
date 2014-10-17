#include "split.h"
#include <cctype>
using namespace std;

vector<string> split(const string& s)
{
    vector<string> lt;
    string s1;
    typedef string::size_type size_tp;
    size_tp size=s.size();
    size_tp i=0,j=0;

    while(i<size)
    {
        while(isspace(s[i])) ++i;
        j=i;
        while(!isspace(s[j])) ++j;

        if(i!=j)
        {
            lt.push_back(s.substr(i,j-i));
        }
        i=j;
    }

    return lt;
}
