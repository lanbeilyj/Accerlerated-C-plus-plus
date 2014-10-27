#ifndef Student_info_H
#define Student_info_H
#include <vector>
#include <string>
#include <iostream>
struct Student_info
{
    std::string name;
    double midterm,fin;
    std::vector<double> homework;

    Student_info()
    {
        std::cout<<"construct"<<std::endl;
    }
    Student_info(const Student_info& s)
    {
        copy(s);
        std::cout<<"copy"<<std::endl;
    }
    void copy(const Student_info& s)
    {
        name=s.name;
        midterm=s.midterm;
        fin=s.fin;
        homework=s.homework;
    }
    Student_info& operator=(const Student_info& s)
    {
        std::cout<<"assign"<<std::endl;
        if(&s!=this)
            copy(s);
        return *this;
    }
    ~Student_info()
    {
        std::cout<<"del"<<std::endl;
    }
};

bool compare(const Student_info& x,const Student_info& y);
std::istream& read(std::istream& in,Student_info& s);
std::istream& read_hw(std::istream& in,std::vector<double>& v);

bool did_all_hw(const Student_info& s);
std::vector<Student_info> extract_fails(std::vector<Student_info>& s);

#endif // Student_info_H
