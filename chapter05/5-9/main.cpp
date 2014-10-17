//main.cpp
#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("/home/lyj/Desktop/5-9/1.txt",ios::in);
    if(!infile.good())
    {
        cout<<"open error!";
        return -1;
    }

    vector<string> upper,lower;
    while(!infile.eof())
    {
        string word;
        infile>>word;
        typedef string::size_type size_tp;
        size_tp size=word.size();
        size_tp u=0,l=0;
        for(size_tp i=0;i<size;++i)
        {
            if(isalpha(word[i]) && isupper(word[i]))
                ++u;
            else if(isalpha(word[i]) && islower(word[i]))
                ++l;
        }
        if(u==size)
            upper.push_back(word);
        else if(l==size)
            lower.push_back(word);
    }

    for(vector<string>::const_iterator it=upper.begin();it!=upper.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(vector<string>::const_iterator it=lower.begin();it!=lower.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}