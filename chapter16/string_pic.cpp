#include "string_pic.h"
#include <ostream>
using namespace std;

Pic_base::wd_sz String_Pic::width() const
{
    Pic_base::wd_sz n=0;
    for(Pic_base::ht_sz i=0;i!=data.size();++i)
    {
        n=std::max(n,data[i].size());
    }

    return n;
}

void String_Pic::display(ostream& os,ht_sz row,bool do_pad) const
{
    wd_sz start=0;

    if(row<height())
    {
        os<<data[row];
        start=data[row].size();
    }

    if(do_pad)
        pad(os,start,width());
}
