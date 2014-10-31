#ifndef Str_H
#define Str_H
#include <memory>
#include <iterator>
#include <cstring>

using std::istream; using std::allocator;
using std::ostream; using std::ostream_iterator;
using std::strcmp;  using std::strlen;
using std::uninitialized_copy;

class Str
{
public:
    typedef size_t size_type;
    typedef char* iterator;
    typedef const char* const_iterator;

    Str() { create(0,'\0'); }
    Str(size_type n,char c) { create(n,c); }
    Str(const Str& s) { create(s.begin(), s.end()); }
    Str(const char* cp) { create(cp,cp+strlen(cp)); }
    template <class In> Str(In b,In e) { create(b,e); }
    ~Str() { uncreate(); }

    size_type size() const { return length-1; }

    Str& operator= (const Str&);
    Str& operator+= (const Str& s);
    char& operator[](size_type i) { return chars[i]; }
    const char& operator[](size_type i) const { return chars[i]; }

    const char* c_str() const { return chars; }
    const char* data() const { return chars; }
    size_type copy(iterator,size_type,size_type=0) const;

    Str substr(size_type,size_type) const;

    iterator begin() { return chars; }
    const_iterator begin() const { return chars; }
    iterator end() { return chars+length-1; }
    const_iterator end() const { return chars+length-1; }

    template <class In> void insert(iterator,In,In);

private:
    size_type length;
    iterator chars;

    allocator<char> alloc;

    void create(size_type,char);
    void uncreate();
    template <class In> void create(In,In);
};

istream& operator>> (istream&,Str&);
istream& getline(istream&,Str&);

ostream& operator<< (ostream&,const Str&);
ostream_iterator<char>& operator<< (ostream_iterator<char>&,const Str&);

istream& operator>> (istream&,Str&);

Str operator+ (const Str&,const Str&);
Str operator+ (const char*,const Str&);
Str operator+ (const Str&,const char*);

bool operator< (const Str& x,const Str& y);
bool operator> (const Str& x,const Str& y);
bool operator<= (const Str& x,const Str& y);
bool operator>= (const Str& x,const Str& y);
bool operator== (const Str& x,const Str& y);
bool operator!= (const Str& x,const Str& y);









#endif // Str_H
