#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    map<string,int> m;
    string word;
    while(cin>>word)
    {
        ++m[word];
    }

    vector<string> same_line_word;
    map<string,int>::const_iterator i=m.begin();
    int k=1;
    while(i!=m.end())
    {
        map<string,int>::const_iterator j=m.begin();
        string lines;
        for(;j!=m.end();++j)
        {
            if(j->second==k)
            {
                lines=lines+" "+j->first;
            }
        }
        same_line_word.push_back(lines);
        ++i;
        ++k;
    }

    for(vector<string>::const_iterator i=same_line_word.begin();i!=same_line_word.end();++i)
    {
        cout<<*i<<endl;
    }


}






