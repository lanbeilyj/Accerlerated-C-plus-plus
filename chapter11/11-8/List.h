#ifndef lst_H
#define lst_H
#include <memory>
#include <cstddef>
#include <algorithm>

template <class T>
struct node{
    T data;
    node<T> *prior,*next;

    node(){}
    node(const T& t)
    {
        data=t;
        next=0;
        prior=0;
    }
};

template <class T>
class List
{
public:
    class iterator
    {
    public:
        iterator():p(0){}
        iterator(node<T> *n):p(n){}
        iterator(const iterator& it){ p=it.p;}
        iterator& operator=(const iterator& it)
        {
            if(this==&it)
                return *this;
            p=it.p;
        }
        //++
        iterator& operator++()
        {
            p=p->next;
            return *this;
        }
        iterator& operator++(int)
        {
            iterator temp=*this;
            p=p->next;
            return temp;
        }
        //--
        iterator& operator--()
        {
            p=p->prior;
            return *this;
        }
        iterator& operator--(int)
        {
            iterator temp=*this;
            p=p->prior;
            return temp;
        }
        //==,!=
        bool operator==(const iterator& it)
        {
            return p==it.p;
        }
        bool operator!=(const iterator& it)
        {
            return p!=it.p;
        }
        //*,->
        T operator*() { return p->data;}
        T operator->() { return &p->data;}

    private:
        node<T> *p;
    };

public:
    typedef T value_type;

    List();
    List(List<T>& lst);
    List& operator=(List& lst);
    ~List();

    iterator begin() { return head->next;}              //begin()
    iterator end() {return head;}                       //end()

    int size() const { return num; }             //size()
    void clear();                                       //clear()
    bool empty();                                       //empty()

    void push_front(const T& t);                        //push_front()
    void push_back(const T& t);                         //push_back()
    void insert(iterator& it,const T& t);               //insert()


private:
    node<T> *head;
    int num;
    node<T> *allocator(const T& t);
    void deallocator(node<T> *p);
};

template <class T>
List<T>::List():num(0)
{
    node<T> *p=allocator(0);
    p->next=p->prior=p;
    head=p;
}

template <class T>
List<T>::List(List<T>& lst)
{
    node<T> *p=allocator(0);
    p->next=p->prior=p;
    head=p;
    iterator b=lst.begin();
    iterator e=lst.end();
    for(;b!=e;++b)
        push_back(*b);
}

template <class T>
List<T>& List<T>::operator=(List& lst)
{
    if(this==&lst)
        return *this;
    clear();
    iterator b=lst.begin();
    iterator e=lst.end();
    for(;b!=e;++b)
        push_back(*b);
    return *this;
}

template <class T>
List<T>::~List()
{
    clear();
    deallocator(head);
}

template <class T>
void List<T>::clear()
{
    node<T> *temp,*beg;
    beg=head->next;
    while(beg!=head)
    {
        temp=beg->next;
        deallocator(beg);
        beg=temp;
    }
    num=0;
}
template <class T>
bool List<T>::empty()
{
    return num==0;
}

template <class T>
void List<T>::push_front(const T& t)
{
    node<T> *p=allocator(t);
    head->next->prior=p;
    p->prior=head;
    p->next=head->next;
    head->next=p;
    ++num;
}

template <class T>
void List<T>::push_back(const T& t)
{
    node<T> *p=allocator(t);
    head->prior->next=p;
    p->prior=head->prior;
    head->prior=p;
    p->next=head;
    ++num;
}

template <class T>
void List<T>::insert(iterator& it,const T& t)
{
    node<T> *p=allocator(t);
    p->prior=it->prior;
    it->prior->next=p;
    p->next=it;
    it->prior=p;
    ++num;
}

template <class T>
node<T> *List<T>::allocator(const T& t)         //allocate
{
    node<T> *p=new node<T>(t);
    return p;
}

template <class T>
void List<T>::deallocator(node<T> *p)           //destroy
{
    if(p)
        delete p;
}

#endif // lst_H
