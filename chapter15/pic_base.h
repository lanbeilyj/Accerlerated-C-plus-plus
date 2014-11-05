#ifndef pic_base_H
#define pic_base_H
#include <vector>
#include <ostream>
class Picture;
class Pic_base
{
    friend std::ostream& operator<< (std::ostream&,const Picture&);
    friend class Frame_Pic;
    friend class HCat_Pic;
    friend class VCat_Pic;
    friend class String_Pic;

    typedef std::vector<std::string>::size_type ht_sz;  //height
    typedef std::string::size_type wd_sz;               //width

    virtual wd_sz width() const =0;
    virtual ht_sz height() const =0;
    virtual void display(std::ostream&,ht_sz,bool) const =0;

public:
    virtual ~Pic_base() {}

protected:
    static void pad(std::ostream& os,wd_sz beg,wd_sz end)
    {
        while(beg!=end)
        {
            os<<" ";
            ++beg;
        }
    }
};
#endif // pic_base_H
