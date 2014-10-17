//Student_info.cpp
#include "Student_info.h"
using namespace std;

bool compare(const Student_info &x,const Student_info &y)
{
	return x.name<y.name;
}

istream& read(istream& is,string name,Grade& s)//输入姓名name和成绩结构(midterm,fin,homework)
{
	cout<<"input name,midterm,fin:";
	is>>name>>s.midterm>>s.fin;

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