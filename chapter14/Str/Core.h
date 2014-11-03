#ifndef Core_H
#define Core_H
#include <istream>
#include <vector>
#include "Str.h"
class Core
{
    friend class Student_info;
public:
    Core():midterm(0),final(0) {}
    Core(std::istream& is) { read(is); }

    virtual ~Core(){}

    Str name() const
    {
        return n;
    }

    virtual std::istream& read(std::istream&);
    virtual double grade() const;
    virtual void regrade(double d1,double d2=0)
    {
        final=d1;
    }

    virtual Core* clone() const
    {
        return new Core(*this);
    }

protected:
    std::istream& read_common(std::istream&);

    double midterm,final;
    std::vector<double> homework;

private:
    Str n;
};

bool compare(const Core&, const Core&);

#endif // Core_H
