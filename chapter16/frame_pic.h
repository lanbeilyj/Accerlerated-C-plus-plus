#ifndef frame_pic_H
#define frame_pic_H
#include <iostream>
#include "Ptr.h"
#include "pic_base.h"

class Frame_Pic:public Pic_base
{
    friend Picture frame(const Picture&);

    Ptr<Pic_base> p;
    Frame_Pic(const Ptr<Pic_base>& pic):p(pic) {}

    wd_sz width() const { return p->width()+4; }
    ht_sz height() const { return p->height()+4; }
    void display(std::ostream&,ht_sz,bool) const;
};
#endif // frame_pic_H
