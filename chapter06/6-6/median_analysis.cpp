#ifndef median_analysis_H
#define median_analysis_H
#include "median_analysis.h"
#include <iterator>
#include <algorithm>
#include <iostream>
#include "grade.h"
#include "median.h"
#include <stdexcept>
using namespace std;

double grade_aux(const Student_info& s)
{
    try
    {
        return grade(s);
    }
    catch(domain_error)
    {
        return grade(s.midterm,s.fin,0);
    }
}

void write_analysis(ostream& out,const string& name,
                    double analysis(const vector<Student_info>& s,double f(const Student_info& s))
                    ,double f(const Student_info& s),const vector<Student_info>& did,const vector<Student_info>& didnt)
{
    out<<name<<":madian(did)="<<analysis(did,f)<<",median(didnt)="<<analysis(didnt,f)<<endl;
}

#endif // median_analysis_H
