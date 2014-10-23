#include <string>
#include <iostream>
#include <cctype>
#include <algorithm>
#include <iterator>
using namespace std;

bool space(char c)
{
    return isspace(c);
}

bool not_space(char c)
{
    return !isspace(c);
}

template <class out>
void split(const string& s, out os)
{
    typedef string::const_iterator iter;
    iter i=s.begin();
    iter e=s.end();
    while(i!=e)
    {
        i=find_if(i,e,not_space);
        iter j=find_if(i,e,space);
        if(i!=e)
        {
            *os++=string(i,j);
        }
        i=j;
    }
}

int main()
{
    string s;
    while(getline(cin,s))
        //the ostream_iterator connect to os,and assign string to os actually assigned to this ostream_iterator
        split(s,ostream_iterator<string>(cout,"\n"));
    return 0;
}





