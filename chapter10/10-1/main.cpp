#include <iostream>
#include "student_info.h"
#include <stdexcept>
#include <algorithm>
#include <iomanip>
using namespace std;

string letter_grade(double grade)
{
    static const double numbers[]={90,85,75,60,0};
    static const char *letters[]={"A","B","C","D","E"};
    static const size_t ngrades=sizeof(numbers)/sizeof(*numbers);
    for(size_t i=0;i<ngrades;++i)
    {
        if(numbers[i]<=grade)
            return letters[i];
    }
    return "?\?\?";
}

int main()
{
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen=0;

    while(record.read(cin))
    {
        maxlen=max(maxlen,record.name().size());
        students.push_back(record);
    }

    sort(students.begin(),students.end(),compare);

    for(vector<Student_info>::size_type i=0;i!=students.size();++i)
    {
        cout<<students[i].name()<<string(maxlen+1-students[i].name().size(),' ');
        try
        {
            double total=students[i].grade();
            //streamsize prec=cout.precision();
            //cout<<setprecision(3)<<total<<setprecision(prec)<<endl;
            string gscore=letter_grade(total);
            cout<<gscore<<endl;
        }
        catch(domain_error e)
        {
            cout<<e.what()<<endl;
        }
    }
    return 0;
}
