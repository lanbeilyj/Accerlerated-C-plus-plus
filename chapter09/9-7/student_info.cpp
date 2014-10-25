#include "student_info.h"
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

istream& read_hw(istream& is,vector<double>& hw)
{
	if(is)
	{
		hw.clear();
		double x;
		while(is>>x)
			hw.push_back(x);
		is.clear();
	}
	return is;
}
