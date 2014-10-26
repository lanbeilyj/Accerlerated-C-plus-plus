#ifndef student_info_H
#define student_info_H
#include <vector>
#include <istream>
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
    double grade() const;

private:
    std::string n;
    double midterm,fin;
    std::vector<double> homework;

};
bool compare(const Student_info&,const Student_info&);

#endif // student_ino_H
