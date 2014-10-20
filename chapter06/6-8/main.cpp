#include <iostream>
#include "optimistic_median_analysis.h"
#include "median_analysis.h"
#include "average_analysis.h"
using namespace std;

int main()
{
    vector<Student_info> bdid,gdid,bdidnt,gdidnt;
    Student_info st;
    while(read(cin,st))
    {
        if(did_all_hw(st))
        {
            if(st.sex=="boy")
                bdid.push_back(st);
            else
                gdid.push_back(st);
        }
        else
        {
            if(st.sex=="boy")
                bdidnt.push_back(st);
            else
                gdidnt.push_back(st);
        }
    }
/*
    for(vector<Student_info>::const_iterator i=didnt.begin();i!=didnt.end();++i)
    {
        cout<<(*i).name<<" ";
    }
*/
    //verify that the analysis will show us sonmething
    if(bdid.empty())
    {
        cout<<"No student did all the homework!"<<endl;
        //return 1;
    }
    if(bdidnt.empty())
    {
        cout<<"Every student did all the homework!"<<endl;
        //return 1;
    }
    //do the analysis
    cout<<"boys"<<endl;
    write_analysis(cout,"median",median_analysis,bdid,bdidnt);
    write_analysis(cout,"average",average_analysis,bdid,bdidnt);
    write_analysis(cout,"median of homework turned in",optimistic_median_analysis,bdid,bdidnt);

    cout<<"girls"<<endl;
    write_analysis(cout,"median",median_analysis,gdid,gdidnt);
    write_analysis(cout,"average",average_analysis,gdid,gdidnt);
    write_analysis(cout,"median of homework turned in",optimistic_median_analysis,gdid,gdidnt);

    cout<<endl;
    return 0;
}
