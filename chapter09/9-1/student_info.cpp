#include "student_info.h"
#include "read_hw.h"
#include "grade.h"
#include "median.h"
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

double Student_info::grade()
{
    if(!valid())
        throw domain_error("students has done no homework!");
        try
    {
        total=::grade(midterm,fin,homework);
    }
    catch (domain_error e)
    {
        cout<<e.what()<<endl;
    }
    return total;
}

bool compare(const Student_info& x,const Student_info& y)
{
    return x.name()<y.name();
}

