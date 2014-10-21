#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string,int> m;
    string word;
    while(cin>>word)
    {
        ++m[word];
    }
    for(map<string,int>::const_iterator i=m.begin();i!=m.end();++i)
    {
        cout<<i->first<<"---------"<<i->second<<endl;
    }

}






