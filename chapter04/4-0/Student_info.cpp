//Student_info.cpp
#include "Student_info.h"
using namespace std;

bool compare(const Student_info &x,const Student_info &y)
{
	return x.name<y.name;
}

istream& read(istream& is,Student_info& s)
{
	cout<<"input name,midterm,fin:";
	is>>s.name>>s.midterm>>s.fin;

	cout<<endl<<"homework score:";
	read_hw(is,s.homework);
	return is;
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