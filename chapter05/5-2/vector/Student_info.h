//Student_info.h
#ifndef Student_info_H
#define Student_info_H
#include <string>
#include <vector>

class Student_info
{
public:
    std::string name;
    double midterm,fin;
    std::vector<double> homework;
};
#endif // Student_info_H