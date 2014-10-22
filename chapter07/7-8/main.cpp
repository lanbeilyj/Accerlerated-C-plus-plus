#include <iostream>
#include "find_url.h"
#include <fstream>
#include <map>
#include <iterator>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("/home/lyj/Desktop/7-8/url.txt",ios::in);
    if(!infile.good())
    {
        cout<<"file open error";
        return -1;
    }

    string line;
    map<string,vector<int> > m;
    int line_number=0;

    while(getline(infile,line))
    {
        ++line_number;
        vector<string> v=find_urls(line);
        for(vector<string>::const_iterator i=v.begin();i!=v.end();++i)
        {
            m[*i].push_back(line_number);
        }
    }
    cout<<"the urls in the txt is:"<<endl;
    for(map<string,vector<int> >::const_iterator i=m.begin();i!=m.end();++i)
    {
        cout<<i->first<<" in line:";
        for(vector<int>::const_iterator j=i->second.begin();j!=i->second.end();++j)
        {
            cout<<" "<<*j;
        }
        cout<<endl;
    }
    return 0;
}
