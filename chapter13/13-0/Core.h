#ifndef Core_H
#define Core_H
#include <istream>
#include <vector>

class Core
{
    friend class Student_info;
public:
    Core():midterm(0),final(0) {}
    Core(std::istream& is) { read(is); }

    virtual ~Core(){}

    std::string name() const
    {
        return n;
    }

    virtual std::istream& read(std::istream&);
    virtual double grade() const;

protected:
    std::istream& read_common(std::istream&);

    double midterm,final;
    std::vector<double> homework;

    virtual Core* clone() const
    {
        return new Core(*this);
    }

private:
    std::string n;
};

#endif // Core_H
