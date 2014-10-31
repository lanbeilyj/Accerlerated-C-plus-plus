#ifndef Student_info_H
#define Student_info_H
#include "Core.h"
#include <stdexcept>
class Student_info
{
public:
    Student_info():cp(0) {}
    Student_info(std::istream& is):cp(0) { read(is); }
    Student_info(const Student_info&);
    Student_info& operator= (const Student_info&);
    ~Student_info() { delete cp; }

    std::istream& read(std::istream&);

    std::string name() const
    {
        if(cp)
            return cp->name();
        else
            throw std::runtime_error("uninitialized student");
    }

    double grade() const
    {
        if(cp)
            return cp->grade();
        else
            throw std::runtime_error("uninitialized student");

    }

    static bool compare(const Student_info& x,const Student_info& y)
    {
        return x.name()<y.name();
    }

private:
    Core *cp;

};//class

#endif // Student_info_H

