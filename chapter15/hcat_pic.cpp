#include "hcat_pic.h"
#include <ostream>
using namespace std;

void HCat_Pic::display(ostream& os,ht_sz row,bool do_pad) const
{
    left->display(os,row,do_pad || row < right->height());
    right->display(os,row,do_pad);
}
