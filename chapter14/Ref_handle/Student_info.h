#ifndef Student_info_H
#define Studnet_info_H
#include "Core.h"
#include "ref_handle.h"
#include <stdexcept>
#include <istream>

class Student_info
{
public:
    Student_info() {}
    Student_info(std::istream& is) { read(is); }

    std::istream& read(std::istream&);
    std::string name() const
    {
        if(cp)
            return cp->name();
        throw std::runtime_error("uninitialized student");
    }

    double grade() const
    {
        if(cp)
            return cp->grade();
        throw std::runtime_error("uninitialized student");
    }


    static bool compare(const Student_info& s1,const Student_info& s2)
    {
        return s1.name()<s2.name();
    }

private:
    Ref_handle<Core> cp;
};

#endif // Student_info_H
