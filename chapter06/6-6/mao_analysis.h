#ifndef mao_analysis_H
#define mao_analysis_H
#include <vector>
#include "Student_info.h"

double mao_analysis(const std::vector<Student_info>& s,double f(const Student_info& s));

#endif // mao_analysis_H
