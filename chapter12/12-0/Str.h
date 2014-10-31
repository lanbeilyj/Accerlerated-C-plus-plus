#ifndef Str_H
#define Str_H
#include <iostream>
#include "Vec.h"
#include <string.h>
class Str
{
public:
    typedef Vec<char>::size_type size_type;

    Str(){}
    Str(size_type n,char c):data(n,c){}
    Str(const char* cp) { copy(cp,cp+strlen(cp),std::back_inserter(data)); }
    template <class In>
    Str(In b,In e) { std::copy(b,e,std::back_inserter(data)); }

    size_type size() const { return data.size(); }

    friend std::istream& operator>> (std::istream&,Str&);
    Str& operator+= (const Str& s);
    char& operator[](size_type i) { return data[i]; }
    const char& operator[](size_type i) const { return data[i]; }

private:
    Vec<char> data;
};

std::istream& operator>> (std::istream& is,Str& s)
{
    s.data.clear();
    char c;

    while(is.get(c) && isspace(c));

    if(is)
    {
        do
        {
            s.data.push_back(c);
        }while(is.get(c) && !isspace(c));

        if(is)
            is.unget();
    }

    return is;
}

std::ostream& operator<< (std::ostream& os,const Str& s)
{
    for(Str::size_type i=0;i!=s.size();++i)
    {
        os<<s[i];
    }

    return os;
}

Str& Str::operator+= (const Str& s)
{
    std::copy(s.data.begin(),s.data.end(),std::back_inserter(data));

    return *this;
}

Str operator+ (const Str& x,const Str& y)
{
    Str temp;
    temp=x;
    temp+=y;

    return temp;
}

#endif // Str_H
