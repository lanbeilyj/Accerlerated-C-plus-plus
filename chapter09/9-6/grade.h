#ifndef grade_H
#define grade_H

#include <vector>
#include "student_info.h"

double grade(double midterm,double fin,double homework);
double grade(double midterm,double fin,const std::vector<double>& hw);

#endif
