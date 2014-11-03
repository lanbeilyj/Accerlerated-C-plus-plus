#include "Student_info.h"
#include "Grad.h"
using namespace std;

istream& Student_info::read(istream& is)
{
    char ch;
    is>>ch;
    if(ch=='U')
        cp=new Core(is);
    else
        cp=new Grad(is);

    return is;
}

void Student_info::regrade(double final,double thesis)
{
    cp.make_unique();
    if(cp)
        cp->regrade(final,thesis);
    else
        throw runtime_error("regrade of unknown students");
}
