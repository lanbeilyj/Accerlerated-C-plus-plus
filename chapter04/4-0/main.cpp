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
	Student_info record;
	string::size_type maxlen=0;//the longest name size
	while(read(cin,record))
	{
		maxlen=max(maxlen,record.name.size());
		students.push_back(record);
	}
	sort(students.begin(),students.end(),compare);

	//output
	for(vector<Student_info>::size_type i=0;
		i!=students.size();++i)
	{
		cout<<students[i].name
			<<string(maxlen+1-students[i].name.size(),' ');
		try
		{
			double total=grade(students[i]);
			streamsize prec=cout.precision();
			cout<<setprecision(4)<<total<<setprecision(prec)<<endl;
		}
		catch(domain_error e)
		{
			cout<<e.what();
		}
	}
	cout<<endl;
	return 0;
}