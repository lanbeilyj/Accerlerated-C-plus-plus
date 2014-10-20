#ifndef average_analysis_H
#define average_analysis_H
#include "Student_info.h"
#include <vector>
#include <string>

double average(const std::vector<double>& v);
double average_grade(const Student_info& s);
double average_analysis(const std::vector<Student_info>& s);

#endif // average_analysis_H
