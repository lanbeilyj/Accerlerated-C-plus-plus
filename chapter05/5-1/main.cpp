#include <iostream>
#include <fstream>
#include <algorithm>
#include "compare.h"
#include "rotation.h"
#include "unrotation.h"

using namespace std;

int main()
{
    ifstream infile;
    infile.open("/home/lyj/Desktop/5-1/in.txt",ios::in);
    if(!infile.good())
    {
        cout<<"file open error!";
        return -1;
    }
    string s;
    vector<string> v;
    while(getline(infile,s))
        v.push_back(s);//按行存储短语

    v=rotation(v);//vr存储两行短语的轮转集合
/*
    for(vector<string>::const_iterator it=vr.begin();it!=vr.end();++it)
    {
        cout<<endl<<*it<<endl;
    }
*/
    sort(v.begin(),v.end(),comparef);//对轮转集合进行排序
/*
    for(vector<string>::const_iterator it=v.begin();it!=v.end();++it)
    {
        cout<<endl<<*it<<endl;
    }
*/
    //反向轮转,分隔,连接
    v=unrotation(v);

    //最终输出
    for(vector<string>::const_iterator it=v.begin();it!=v.end();++it)
    {
        cout<<endl<<*it<<endl;
    }

    return 0;
}
