#include "average_analysis.h"
#include <numeric>
#include "grade.h"
#include <algorithm>
#include "median.h"
using namespace std;

double average(const vector<double>& v)
{
    return accumulate(v.begin(),v.end(),0.0)/v.size();
}

double average_grade(const Student_info& s)
{
    return grade(s.midterm,s.fin,average(s.homework));
}

double average_analysis(const vector<Student_info>& s)
{
    vector<double> grades;
    transform(s.begin(),s.end(),back_inserter(grades),average_grade);
    return median(grades);
}
