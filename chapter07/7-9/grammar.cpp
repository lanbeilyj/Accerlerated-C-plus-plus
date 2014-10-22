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
        vector<string> entry=split(line);
        if(!entry.empty())
            ret[entry[0]].push_back(Rule(entry.begin()+1,entry.end()));
    }
    infile.close();
    return ret;
}
