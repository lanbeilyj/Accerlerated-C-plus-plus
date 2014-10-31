#ifndef Grad_H
#define Grad_H
#include "Core.h"
#include <istream>
class Grad:public Core
{
public:
    Grad():thesis(0) {}
    Grad(std::istream& is) { read(is); }

    double grade() const;
    std::istream& read(std::istream&);

protected:
    Grad* clone() const
    {
        return new Grad(*this);
    }

private:
    double thesis;
};

#endif // Grad_H
