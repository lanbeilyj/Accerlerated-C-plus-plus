#include "grammar.h"
#include <iostream>
#include "split.h"
#include <fstream>
using namespace std;

Grammar read_grammar()//读入文法
{
    Grammar ret;
    string line;
    ifstream infile;
    infile.open("/home/lyj/Desktop/Grammar/g.txt",ios::in);
    if(!infile.good())
    {
        cout<<"file read error";
        return ret;
    }

    while(getline(infile,line))
    {
        list<string> entry=split(line);
        typedef list<string>::const_iterator iter;
        iter it=entry.begin();
        if(!entry.empty())
        {
            iter j=it;
            ++j;
            Rule r;
            for(iter n=j;n!=entry.end();++n)
                r.push_back(*n);
            ret[*it].push_back(r);
        }
        ++it;
    }
    infile.close();
    return ret;
}
