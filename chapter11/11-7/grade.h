#ifndef grade_H
#define grade_H

#include "Vec.h"
#include "student_info.h"

double grade(double midterm,double fin,double homework);
double grade(double midterm,double fin,const Vec<double>& hw);

#endif
