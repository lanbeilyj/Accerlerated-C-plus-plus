#ifndef grade_H
#define grade_H
#include <string>
#include <vector>
#include "Student_info.h"

double grade(double midterm,double fin,double homework);
double grade(double midterm,double fin,const std::vector<double>& hw);
std::string grade(double grade)
#endif
