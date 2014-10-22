//main.cpp
#include <algorithm>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <map>
#include <iterator>
#include "grade.h"
#include "Student_info.h"
using namespace std;
//=======================modifed in here=============
//rank the grade
map<string,vector<Student_info> > rank(vector<Student_info>& student)
{
    map<string,vector<Student_info> > m;
    for(vector<Student_info>::size_type i=0;i!=student.size();++i)
	{
		try
		{
			double total=grade(student[i]);
			if(90<=total)
                m["A"].push_back(student[i]);
            else if(80<=total)
                m["B"].push_back(student[i]);
            else if(70<=total)
                m["C"].push_back(student[i]);
            else if(60<=total)
                m["D"].push_back(student[i]);
            else
                m["E"].push_back(student[i]);
		}
		catch(domain_error e)
		{
			cout<<e.what();
		}
	}
	return m;
}
//==================================================
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
//=======================modifed in here=============
    map<string,vector<Student_info> > m=rank(students);
	//output
	cout<<endl;
	for(map<string,vector<Student_info> >::const_iterator i=m.begin();i!=m.end();++i)
	{
        cout<<i->first<<"\t";
        for(vector<Student_info>::const_iterator j=i->second.begin();j!=i->second.end();++j)
        {
            cout<<" "<<(*j).name;
        }
        cout<<endl;
	}
//===================================================
	return 0;
}
