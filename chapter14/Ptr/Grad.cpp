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

void Grad::regrade(double d1,double d2)
{
    final=d1;
    thesis=d2;
}
