#include "mao_analysis.h"
#include "median.h"
#include <algorithm>
using namespace std;

double mao_analysis(const vector<Student_info>& s,double f(const Student_info& s))
{
    vector<double> grades;
    transform(s.begin(),s.end(),back_inserter(grades),f);
    return median(grades);
}

