//main.cpp
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.h"
#include "Student_info.h"
using namespace std;
int main()
{
    vector<Student_info> students;
	Student_info student;
	Grade record;
	string::size_type maxlen=0;//the longest name size
	while(read(cin,student.name,record))
	{
		maxlen=max(maxlen,student.name.size());
		try
		{
            double finalGrade=grade(record);
            student.total=finalGrade;
		}
		catch(domain_error e)
		{
		    cout<<e.what();
		}
		students.push_back(student);
	}
	sort(students.begin(),students.end(),compare);

	//output
	cout<<"total is:"<<endl;
	for(vector<Student_info>::size_type i=0;
		i!=students.size();++i)
	{
        streamsize prec=cout.precision();
        cout<<setprecision(4)<<students[i].total<<setprecision(prec)<<endl;
	}
	cout<<endl;
	return 0;
}