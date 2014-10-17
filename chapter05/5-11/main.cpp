//main.cpp
#include <iostream>
#include <fstream>
#include <vector>
#include "updown.h"
using namespace std;

int main()
{
    ifstream infile;
    infile.open("/home/lyj/Desktop/5-11/1.txt");
    if(!infile.good())
    {
        cout<<"file open error!";
        return -1;
    }
    //find it is a up or down word
    string word;
    vector<string> longest;
    while(!infile.eof())
    {
        infile>>word;
        if(!is_updown(word))
        {
            longest.push_back(word);
        }

    }
    infile.close();
    //the longest word
    typedef string::size_type size_tp;
    vector<string>::const_iterator it=longest.begin(),maxit=it;
    size_tp maxlen=(*it).size();
    for(it=it+1;it!=longest.end();++it)
    {
        size_tp n=(*it).size();
        if(maxlen<=n)
        {
            maxlen=n;
            maxit=it;
        }

    }
    cout<<endl<<"the longest updown-word is: "<<*maxit<<" its size is: "<<maxlen<<endl;
    return 0;
}