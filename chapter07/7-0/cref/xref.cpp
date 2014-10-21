#include "xref.h"
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
        for(vector<string>::const_iterator it=words.begin();it!=words.end();++it)
        {
            ret[*it].push_back(line_number);
        }
    }
    return ret;
}
