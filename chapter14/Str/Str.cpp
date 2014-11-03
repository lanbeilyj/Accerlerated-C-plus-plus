#include "Str.h"

std::ostream& operator<< (std::ostream& os,const Str& s)
{
    for (Str::size_type i=0;i!=s.size();++i)
        os << s[i];
    return os;
}

Str operator+ (const Str& x,const Str& y)
{
    Str temp=x;
    temp+=y;
    return temp;
}

std::istream& operator>>(std::istream& is, Str& s)
{
    s.data->clear();
    char c;
    while (is.get(c) && isspace(c));

    if(is)
	{
        do
        {
            s.data->push_back(c);
        }while(is.get(c) && !isspace(c));
        if(is) is.unget();
    }

    return is;
}

std::istream& getline(std::istream&is, Str& s)
{
    s.data->clear();
    char c;
    while (is.get(c) && isspace(c));

    if(is)
    {
        do
        {
            s.data->push_back(c);
        }while(is.get(c) && c != '\n');
        if(is) is.unget();
    }
    return is;
}

//lexicographical_compare()你可以参考《C++ Primer附录算法》
bool operator<(const Str& lhs, const Str& rhs)
{
  return std::lexicographical_compare(lhs.begin(), lhs.end(),rhs.begin(), rhs.end());
}

bool operator>(const Str& lhs, const Str& rhs)
{
  return std::lexicographical_compare(rhs.begin(), rhs.end(),lhs.begin(), lhs.end());
}

bool operator<=(const Str& lhs, const Str& rhs)
{
  return !std::lexicographical_compare(rhs.begin(), rhs.end(),lhs.begin(), lhs.end());
}

bool operator>=(const Str& lhs, const Str& rhs)
{
  return !std::lexicographical_compare(lhs.begin(), lhs.end(),rhs.begin(), rhs.end());
}

bool operator==(const Str& lhs, const Str& rhs)
{
  return (lhs.size() == rhs.size() && std::equal(lhs.begin(), lhs.end(), rhs.begin()));
}

bool operator!=(const Str& lhs, const Str& rhs)
{
  return !(lhs == rhs);
}
