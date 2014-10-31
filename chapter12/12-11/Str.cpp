#include "Str.h"
#include <stdexcept>
#include <algorithm>
#include <cctype>
#include <vector>

using namespace std;

//----------------------------------------------------------------------------- memory management
void Str::create(size_type n,char c)
{
    length=n+1;
    chars=alloc.allocate(length);
    uninitialized_fill(chars,chars+length-1,c);
    alloc.construct(chars+length-1,'\0');
}

template <class In>
void Str::create(In b,In e)
{
    length=e-b+1;
    chars=alloc.allocate(length);
    uninitialized_copy(b,e,chars);
    alloc.construct(chars+length-1,'\0');
}

void Str::uncreate()
{
    if(chars)
    {
        iterator it=chars+length;
        while(it!=chars) alloc.destroy(--it);
        alloc.deallocate(chars,length);
    }

    chars=0;
    length=0;
}

//----------------------------------------------------------------------------- c_str() , data() , copy()
Str::size_type Str::copy(iterator s,size_type n,size_type pos) const
{
    if(pos>size())
        throw out_of_range("pos>size()");

    size_t copy_length=min(n,size()-pos);

    ::copy(chars+pos,chars+copy_length,s);

    return copy_length;
}


Str Str::substr(size_type pos,size_type n) const
{
    return Str(chars+pos,chars+pos+n);
}

//----------------------------------------------------------------------------- insert
template <class In>
void Str::insert(iterator p,In b,In e)
{
    size_type new_length = length + (e - b);
    iterator new_chars = alloc.allocate(new_length);
    uninitialized_copy(chars, p, new_chars);
    uninitialized_copy(b, e, new_chars + (p - chars));
    uninitialized_copy(p, chars + length - 1, new_chars + (p - chars) + (e - b));
    alloc.construct(new_chars + new_length - 1, '\0');

    uncreate();

    length = new_length;
    chars = new_chars;
}

//------------------------------------------------------------------------------ >> , <<
static int is_newline(int c)
{
    return c=='\n';
}

static istream& read_until(istream& is,Str& s,int is_stop_char(int))
{
    std::vector<char> data;

    char c;
    while(is.get(c) && isspace(c));
    if(is)
    {
        do
        {
            data.push_back(c);
        }while(is.get(c) && !is_stop_char(c));

        if(is)
            is.unget();
    }

    s=Str(data.begin(),data.end());

    return is;
}

istream& operator>> (istream& is,Str& s)
{
    return read_until(is,s,isspace);
}

ostream& operator<< (ostream& os,const Str& s)
{
    for(Str::size_type i=0;i!=s.size();++i)
        os<<s[i];
    return os;
}

ostream_iterator<char>& operator<< (ostream_iterator<char>& os,const Str& s)
{
    copy(s.begin(),s.end(),os);
    return os;
}

//----------------------------------------------------------------------------- getline
istream& getline(istream& is,Str& s)
{
    return read_until(is,s,is_newline);
}

//------------------------------------------------------------------------------  = , + , +=
Str& Str::operator= (const Str& rhs)
{
    if(&rhs!=this)
    {
        uncreate();
        create(rhs.begin(),rhs.end());
    }

    return *this;
}

Str& Str::operator+= (const Str& s)
{
    size_type new_length=length+s.size();
    iterator new_chars=alloc.allocate(new_length);
    uninitialized_copy(chars,chars+length-1,new_chars);
    uninitialized_copy(s.begin(),s.end(),new_chars+length-1);
    alloc.construct(new_chars+new_length-1,'\0');
    uncreate();
    length=new_length;
    chars=new_chars;
}

Str operator+ (const Str& x,const Str& y)
{
    Str temp=x;
    temp+=y;

    return temp;
}

Str operator+ (const char* x,const Str& y)
{
    Str temp(x,x+strlen(x));
    temp+=y;

    return temp;
}

Str operator+ (const Str& x,const char* y)
{
    Str temp=x;
    temp+=Str(y,y+strlen(y));

    return temp;
}

//------------------------------------------------------------------------------- < , > , <= , >= , == , !=
bool operator< (const Str& x,const Str& y)
{
    return strcmp(x.c_str(),y.c_str())<0;
}
bool operator> (const Str& x,const Str& y)
{
    return strcmp(x.c_str(),y.c_str())>0;
}

bool operator<= (const Str& x,const Str& y)
{
    return strcmp(x.c_str(),y.c_str())<=0;
}

bool operator>= (const Str& x,const Str& y)
{
    return strcmp(x.c_str(),y.c_str())>=0;
}

bool operator== (const Str& x,const Str& y)
{
    return strcmp(x.c_str(),y.c_str())==0;
}

bool operator!= (const Str& x,const Str& y)
{
    return strcmp(x.c_str(),y.c_str())!=0;
}
