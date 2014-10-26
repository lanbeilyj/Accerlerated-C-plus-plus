#include "student_info.h"
#include "read_hw.h"
#include "grade.h"
#include <stdexcept>
using namespace std;
Student_info::Student_info(istream& is)
{
    read(is);
}

istream& Student_info::read(istream& in)
{
    in>>n>>midterm>>fin;
    read_hw(in,homework);
    return in;
}

double Student_info::grade() const
{
    if(!valid())
        throw domain_error("students has done no homework!");
    return ::grade(midterm,fin,homework);
}

bool compare(const Student_info& x,const Student_info& y)
{
    return x.name()<y.name();
}

