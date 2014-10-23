#include <iostream>
#include "analysis.h"
#include "fun_analysis.h"
using namespace std;

int main()
{
    vector<Student_info> did,didnt;
    Student_info st;
    while(read(cin,st))
    {
        if(did_all_hw(st))
            did.push_back(st);
        else
            didnt.push_back(st);
    }

    if(did.empty())
    {
        cout<<"No student did all the homework!"<<endl;
        return 1;
    }
    if(didnt.empty())
    {
        cout<<"Every student did all the homework!"<<endl;
        return 1;
    }
    //do the analysis
    write_analysis(cout,"median",fun_analysis,grade_aux,did,didnt);
    write_analysis(cout,"average",fun_analysis,average_grade,did,didnt);
    write_analysis(cout,"median of homework turned in",fun_analysis,optimistic_median,did,didnt);

    return 0;
}
