#include "Student_info.h"
#include "grade.h"
#include "median.h"
#include <stdexcept>
using namespace std;

double grade(double midterm,double fin,double homework)
{
    return 0.2*midterm+0.4*fin+0.4*homework;
}

double grade(double midterm,double fin,const vector<double>& hw)
{
    if(hw.size()==0)
        throw domain_error("students has done no homework");
    return grade(midterm,fin,median(hw));
}

double grade(const Student_info& s)
{
    return grade(s.midterm,s.fin,s.homework);
}

bool fgrade(const Student_info& s)
{
    return grade(s)<60;
}

bool pgrade(const Student_info& s)
{
    return !fgrade(s);
}
