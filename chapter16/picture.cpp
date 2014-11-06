#include "picture.h"
#include "string_pic.h"
#include "frame_pic.h"
#include "hcat_pic.h"
#include "vcat_pic.h"
using namespace std;

Picture::Picture(const vector<string>& v):p(new String_Pic(v)) { }

Picture frame(const Picture& pic)
{
    return new Frame_Pic(pic.p);
}

Picture hcat(const Picture& l,const Picture& r)
{
    return new HCat_Pic(l.p,r.p);
}

Picture vcat(const Picture& t,const Picture& b)
{
    return new VCat_Pic(t.p,b.p);
}

ostream& operator<< (ostream& os,const Picture& picture)
{
    const Pic_base::ht_sz ht=picture.p->height();
    for(Pic_base::ht_sz i=0;i!=ht;++i)
    {
        picture.p->display(os,i,false);
        os<<endl;
    }
    return os;
}
