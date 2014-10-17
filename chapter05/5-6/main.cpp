//main.cpp
#include <iostream>
#include "Student_info.h"
#include "grade.h"
#include "extract_fails.h"
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <time.h>
using namespace std;

int main()
{
    //read file
    ifstream infile;
    infile.open("/home/lyj/Desktop/5/5-2/1.txt",ios::in);
    if(!infile.good())
    {
        cout<<"file open error!"<<endl;
        return 1;
    }
    vector<Student_info> vec;

    while(!infile.eof())
    {
        Student_info st;
        infile>>st.name>>st.midterm>>st.fin;

        double hw;
        for(int i=0;i<3;++i)
        {
            infile>>hw;
            st.homework.push_back(hw);
        }
        vec.push_back(st);
    }
    infile.close();

  /*  for(vector<Student_info>::iterator iter=vec.begin();iter!=vec.end();++iter)
    {
        cout<<(*iter).name<<endl;
    }*/

    clock_t start,finish;
    start=clock();
    extract_fails(vec);
    finish=clock();
    long double t=double(finish-start)/CLOCKS_PER_SEC;
    cout<<endl<<t<<"s"<<endl;

    return 0;
}