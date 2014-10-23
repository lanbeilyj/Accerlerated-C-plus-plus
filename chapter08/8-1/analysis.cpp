#include "analysis.h"
#include <iterator>
#include <algorithm>
#include "grade.h"
#include "median.h"
#include <numeric>
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

double average(const vector<double>& v)
{
    return accumulate(v.begin(),v.end(),0.0)/v.size();
}

double average_grade(const Student_info& s)
{
    return grade(s.midterm,s.fin,average(s.homework));
}

double optimistic_median(const Student_info& s)
{
    vector<double> nonzero;
    remove_copy(s.homework.begin(),s.homework.end(),back_inserter(nonzero),0);
    if(nonzero.empty())
        return grade(s.midterm,s.fin,0);
    else
        return grade(s.midterm,s.fin,median(nonzero));
}

void write_analysis(ostream& out,
                    const string& name,
                    double w_analy(const vector<Student_info>&,double f(const Student_info&)),
                    double fun(const Student_info& ),
                    const vector<Student_info>& did,
                    const vector<Student_info>& didnt)
{
    out<<name<<":madian(did)="<<w_analy(did,fun)<<",median(didnt)="<<w_analy(didnt,fun)<<endl;
}
