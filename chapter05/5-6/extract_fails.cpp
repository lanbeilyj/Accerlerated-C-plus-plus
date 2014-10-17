//extract_fails.cpp
#include "Student_info.h"
#include "extract_fails.h"
#include "grade.h"
using namespace std;

int extract_fails(vector<Student_info>& s)
{
    vector<Student_info> fail;

    for(vector<Student_info>::iterator it=s.begin();it!=s.end();++it)
    {
        if(fgrade(*it))
        {
            fail.push_back(*it);
            //it=s.erase(it);
        }
    }
    s.insert(s.begin(),fail.begin(),fail.end());
    s.resize(fail.size());
    return 0;
}