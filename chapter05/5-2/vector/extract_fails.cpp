//extract_fails.cpp
#include "Student_info.h"
#include "grade.h"
using namespace std;
vector<Student_info> extract_fails(vector<Student_info>& s)
{
    vector<Student_info> fail;

    for(vector<Student_info>::iterator it=s.begin();it!=s.end();)
    {
        if(fgrade(*it))
        {
            fail.push_back(*it);
            it=s.erase(it);
        }
        else
            ++it;
    }
    return fail;
}