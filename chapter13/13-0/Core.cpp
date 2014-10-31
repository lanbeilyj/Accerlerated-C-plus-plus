#include "Core.h"
#include "grade.h"
#include "read_hw.h"

using namespace std;

istream& Core::read_common(istream& in)
{
    in>>n>>midterm>>final;

    return in;
}

istream& Core::read(istream& in)
{
    read_common(in);

    read_hw(in,homework);

    return in;
}

double Core::grade() const
{
    return ::grade(midterm,final,homework);
}

