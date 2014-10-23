#ifndef fun_analysis_H
#define fun_analysis_H
#include <vector>
#include "Student_info.h"
#include <iterator>
#include "median.h"
#include <algorithm>
template <class T1,class T2,class T3>
T1 fun_analysis(T2 s,T1 fun(T3 s))
{
    std::vector<T1> grades;
    transform(s.begin(),s.end(),back_inserter(grades),fun);
    return median(grades);
}
#endif
