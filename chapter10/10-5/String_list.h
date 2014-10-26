#ifndef String_list_H
#define String_list_H
using namespace std;
template <class T>
struct node{
    T data;
    node<T> *prior,*next;
};

template <class T>
class String_list
{
public:
    String_list()
    {
        head=new node<T>;
        head->next=head->prior=NULL;
    }

    void printList()
    {
        node<T> *p=head->next;
        while(p)
        {
            cout<<p->data<<endl;
            p=p->next;
        }
        cout<<endl;
    }

    bool insertList(T e)
    {
        node<T> *p=head,*s=NULL;
        s = new node<T>;
        if(s==NULL)
            return false;
        s->data=e;
        s->next=s->prior=NULL;
        while(p->next)
        {
            p=p->next;
        }
        p->next=s;
        s->prior=p;
        return true;
    }

private:
    node<T> *head;
};

#endif // String_list_H
