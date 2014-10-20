#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

string vsjoin(vector<string>& vs)
{
    vector<string>::const_iterator it=vs.begin();
    string s;
    for(;it!=vs.end();++it)
    {
        s=s+*it;
    }
    return s;
}

int main()
{
    string s;
    vector<string> vs;
    while(cin>>s)
        vs.push_back(s);

    string vsj=vsjoin(vs);

    cout<<endl<<vsj<<endl;
    return 0;
}
