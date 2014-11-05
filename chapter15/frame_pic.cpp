#include "frame_pic.h"
#include <ostream>
using namespace std;
void Frame_Pic::display(ostream& os,ht_sz row,bool do_pad) const
{
    if(row>=height())
    {
        if(do_pad)
            pad(os,0,width());
    }
    else
    {
        if(row==0 || row==height()-1)
            os<<"@"+string(width()-2,'#')+"@";
        else if(row==1 || row==height()-2)
        {
            os<<"*";
            pad(os,1,width()-1);
            os<<"*";
        }
        else
        {
            os<<"*";
            p->display(os,row-2,true);
            os<<string(2,' ')+"*";
        }
    }
}

