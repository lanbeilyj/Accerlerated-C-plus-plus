#ifndef analysis_H
#define analysis_H
#include "Student_info.h"
#include <vector>
#include "Student_info.h"
#include <string>
#include <iostream>

double grade_aux(const Student_info& s);
double average(const std::vector<double>& v);
double average_grade(const Student_info& s);
double optimistic_median(const Student_info& s);
void write_analysis(std::ostream& out,
                    const std::string& name,
                    double w_analy(const std::vector<Student_info>&,double f(const Student_info&)),
                    double fun(const Student_info& ),
                    const std::vector<Student_info>& did,
                    const std::vector<Student_info>& didnt);
#endif // analysis_H
