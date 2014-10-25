#ifndef student_info_H
#define student_info_H
#include <vector>
#include <iostream>
#include <string>

class Student_info
{
public:
    Student_info():midterm(0),fin(0){}
    Student_info(std::istream&);

    std::string name() const
    {
        return n;
    }
    bool valid() const
    {
        return !homework.empty();
    }

    std::istream& read(std::istream&);
    std::string grade();

private:
    std::string n,score;
    double midterm,fin,total;
    std::vector<double> homework;

};
bool compare(Student_info,Student_info);
std::istream& read_hw(std::istream&,std::vector<double>&);
#endif // student_ino_H
