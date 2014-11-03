#include <iostream>
#include "handle.h"
#include "Core.h"
#include "Grad.h"
#include "Student_info.h"
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

bool compare_Core_Handles(const Handle<Core>& lhs,const Handle<Core>& rhs)
{
    return compare(*lhs,*rhs);
}

int main()
{
    vector< Handle<Core> > students;
    Handle<Core> record;
    char ch;
    string::size_type maxlen=0;

    while(cin>>ch)
    {
        if(ch=='U')
            record=new Core;
        else
            record=new Grad;
        record->read(cin);
        maxlen=max(maxlen,record->name().size());

        students.push_back(record);
    }

    sort(students.begin(),students.end(),compare_Core_Handles);

    for(vector<Handle<Core> >::size_type i=0;i!=students.size();++i)
    {
        cout<<students[i]->name()
        <<string(maxlen+1-students[i]->name().size(),'-');

        try
        {
            double final_grade=students[i]->grade();
            streamsize prec=cout.precision();
            cout<<setprecision(3)<<final_grade<<setprecision(prec)<<endl;
        }
        catch (domain_error e)
        {
            cout<<e.what()<<endl;
        }
    }

    return 0;
}
