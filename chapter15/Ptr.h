#ifndef PTR_H
#define PTR_H
#include <stdexcept>
template <class T>
class Ptr
{
public:
    Ptr():p(0),refptr(new size_t(1)) {}
    Ptr(T *t):p(t),refptr(new size_t(1)) {}
    Ptr(const Ptr& h):p(h.p),refptr(h.refptr) { ++*refptr; }

    Ptr& operator= (const Ptr&);
    ~Ptr()
    {
        delete p;
        delete refptr;
    }

    operator bool () const { return p; }
    T& operator* () const;
    T* operator-> () const;

    void make_unique();

private:
    T *p;
    std::size_t *refptr;
};

template <class T>
T* clone(const T* tp)
{
    return tp->clone();
}

template <class T>
void Ptr<T>::make_unique()
{
    if(*refptr!=1)
    {
        --*refptr;
        refptr=new size_t(1);
        p=p?clone(p):0;
    }
}

template <class T>
Ptr<T>& Ptr<T>::operator= (const Ptr& rhs)
{
    //++rhs.refptr;
    --refptr;

    if (*refptr == 0)
        delete p;

    refptr = rhs.refptr+1;
    p = rhs.p;

    return *this;
}

template <class T>
T& Ptr<T>::operator* () const
{
    if(p)
        return *p;
    throw std::runtime_error("unbound Ptr!");
}

template <class T>
T* Ptr<T>::operator-> () const
{
    if(p)
        return p;
    throw std::runtime_error("unbound Ptr!");
}

#endif // PTR_H
