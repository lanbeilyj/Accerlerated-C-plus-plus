#include "Student_info.h"
#include <iostream>
#include <algorithm>
#include "grade.h"
using namespace std;

bool compare(const Student_info& x,const Student_info& y)
{
    return x.name<y.name;
}

istream& read(istream& in,Student_info& s)
{
    in>>s.name>>s.sex>>s.midterm>>s.fin;
    read_hw(in,s.homework);
    return in;
}

istream& read_hw(istream& in,vector<double>& v)
{
    if(in)
    {
        v.clear();
        double hw;
        while(in>>hw)
            v.push_back(hw);
        in.clear();
    }
    return in;
}

bool did_all_hw(const Student_info& s)
{
    return ( find(s.homework.begin(),s.homework.end(),0)==s.homework.end() );
}

vector<Student_info> extract_fails(vector<Student_info>& s)
{
    vector<Student_info>::iterator iter;
    iter=stable_partition(s.begin(),s.end(),pgrade);//使谓词pgrade为真的元素，即>60的放在容器的头部

    vector<Student_info> fail(iter,s.end());
    s.erase(iter,s.end());
    return fail;
}



