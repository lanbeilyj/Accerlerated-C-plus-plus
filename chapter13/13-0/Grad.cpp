#include "Grad.h"
#include "read_hw.h"
#include "grade.h"
using namespace std;
istream& Grad::read(istream& in)
{
    Core::read_common(in);

    in>>thesis;
    read_hw(in,Core::homework);

    return in;
}

double Grad::grade() const
{
    return min(Core::grade(),thesis);
}

bool compare(const Core& c1,const Core& c2)
{
    return c1.name()<c2.name();
}
