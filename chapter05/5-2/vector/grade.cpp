//grade.cpp
#include "grade.h"
#include "median.h"

double grade(double midterm,double fin,double homework)
{
    return 0.2*midterm+0.4*fin+0.4*homework;
}

double grade(double midterm,double fin,const std::vector<double>& hw)
{
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