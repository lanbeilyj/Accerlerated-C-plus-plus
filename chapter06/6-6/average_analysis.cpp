#include "average_analysis.h"
#include <numeric>
#include "grade.h"
#include <algorithm>
using namespace std;

double average(const vector<double>& v)
{
    return accumulate(v.begin(),v.end(),0.0)/v.size();
}

double average_grade(const Student_info& s)
{
    return grade(s.midterm,s.fin,average(s.homework));
}
