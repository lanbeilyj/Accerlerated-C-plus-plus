#include "rotation.h"
#include "split.h"
using namespace std;

//produce the rotations of each phase
vector<string> rotation(const vector<string>& v)
{
    vector<string> rot;
    for(vector<string>::const_iterator it=v.begin();it!=v.end();++it)
    {
        vector<string> vs;//待求轮转集合的短语
        vs=split(*it);//origin phrase

        typedef vector<string>::size_type size_tp;
        size_tp size=vs.size();
        size_tp k=0;//按短语所含单词数，进行循环轮转，求出该短语的所有轮转集合

        vector<string> vrot;//待求轮转集合的短语vs的副本
        vrot=vs;

        while(k<size)//求一条短语的所有轮专集合rot
        {
            //将vector的元素连接成一个string,并存储于rot中
            string s;
            for(vector<string>::const_iterator j=vrot.begin();j!=vrot.end();++j)
            {
                s=s+' '+*j;
            }
            rot.push_back(s);

            //对vs的副本vrot,进行轮转
            //由于每次轮转都在前一次基础之上进行，故此处temp为临时轮转的一个短语
            //轮转后下次被轮转对象为temp,即vrot=temp;
            vector<string> temp;
            vector<string>::iterator q=vrot.begin(),p;
            for(p=q+1;p!=vrot.end();++p)
            {
                temp.push_back(*p);
            }
            temp.push_back(*q);
            vrot=temp;
            ++k;
        }
    }
    return rot;
}
