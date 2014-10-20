#include <iostream>
#include "split.h"
using namespace std;

int main()
{
    string s="I am a very handsome boy!";
    vector<string> v;
    v=split(s);
    cout<<endl;
    for(vector<string>::const_iterator it=v.begin();it!=v.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
