#ifndef hcat_pic_H
#define hcat_pic_H
#include <ostream>
#include "Ptr.h"
#include "pic_base.h"
class HCat_Pic:public Pic_base
{
    friend Picture hcat(const Picture&,const Picture&);

    Ptr<Pic_base> left,right;
    HCat_Pic(const Ptr<Pic_base>& l,const Ptr<Pic_base>& r):left(l),right(r) {}

    wd_sz width() const { return (left->width() + right->width()); }
    ht_sz height() const { return std::max(left->height(),right->height()); }
    void display(std::ostream&,ht_sz,bool) const;
};
#endif // hcat_pic_H
