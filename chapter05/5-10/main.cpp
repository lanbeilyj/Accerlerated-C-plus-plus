//main.cpp
#include <iostream>
#include <fstream>
#include <vector>
#include "palindrome.h"
using namespace std;

int main()
{
    ifstream infile;
    infile.open("/home/lyj/Desktop/5-10/1.txt",ios::in);
    if(!infile.good())
    {
        cout<<"open failed!";
        return -1;
    }

    string word;
    vector<string> palind;
    while(!infile.eof())
    {
        infile>>word;
        if(is_palindrome(word))
            palind.push_back(word);
    }
    infile.close();

    typedef vector<string>::size_type size_tp;
    typedef vector<string>::iterator iter_type;
    iter_type it=palind.begin();
    vector<iter_type> maxit;
    size_tp maxlen=(*it).size();

    for(;it!=palind.end();++it)
    {
        size_tp n=(*it).size();
        if(maxlen<=n)
        {
            maxlen=n;
            maxit.push_back(it);
        }
        cout<<*it<<" ";
    }
    cout<<endl<<"the longest palindrome is:"<<endl;
    for(vector<iter_type>::const_iterator it=maxit.begin();it!=maxit.end();++it)
    {
        cout<<*(*it)<<" ";
    }
    cout<<endl;
    return 0;
}