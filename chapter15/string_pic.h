#ifndef string_pic_H
#define string_pic_H
#include <vector>
#include <string>
#include <ostream>
#include "Ptr.h"
#include "pic_base.h"

class String_Pic:public Pic_base
{
    friend class Picture;

    std::vector<std::string> data;
    String_Pic(const std::vector<std::string>& v):data(v) {}

    wd_sz width() const;
    ht_sz height() const { return data.size(); }
    void display(std::ostream&,ht_sz,bool) const;
};
#endif // string_pic_H
