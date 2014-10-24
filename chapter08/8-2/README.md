#The Standard Library algorithm Realization
===
I have gave some of the algorithm's test example and not give all for the time limited

#1.max(x,y)
```
template <class T>
T max(const T& x,const T& y)
{
    return x<y?y:x;
}
```
#2.find(b,e,t)
```
template <class In,class X>
In find(In begin,In end,const X& x)
{
    //In is an iterator or const_iterator
    while(begin!=end && *begin!=x)
        ++begin;
    return begin;
}
```
#3.find_if(b,e,p)
```
template <class In>
In find_if(In begin,In end,p)
{
    while(begin!=end)
    {
        if(p(*begin))
        {
            return begin;
        }
        ++begin;
    }
}
```
#4.search(b,e,b2,e2)
```
template <class In>
In search(In b,In e,In b2,In e2)
{
    int k=0;
    In start;
    while(b2!=e2)
    {
        while(b!=e)
        {
            if(k==0 && *b==*b2)
            {
                start=b;
                ++b;
                ++k;
                break;
            }
            else if(*b==*b2)
            {
                ++b;
                break;
            }
            ++b;
        }
        ++b2;
    }
    return start;
}
```
#5.remove(b,e,t)
```
//put the element that are !=t in front of the container
template <class X>
void sw(X& x,X& y)
{
    X temp=x;
    x=y;
    y=temp;
}
template <class In,class X>
In remove(In begin,In end,X& x)
{
    while(begin!=end)
    {
        if(*begin==x)
        {
            --end;
            while(*end==x)
                --end;

            sw(*begin,*end);
        }
        ++begin;
    }
    return end;
}
```
#6.copy(b,e,d)
```
template <class In,class Out>
Out copy(In begin,In end,Out dest)
{
    while(begin!=end)
        *dest++=*begin++;
    return dest;
}
```
#7.remove_copy(b,e,d,t)
```
template <class In,class Out,class X>
Out remove_copy(In begin,In end,Out dest,const X& x)
{
    while(begin!=end)
    {
        if(*begin==x)
            *d++=*begin;
        ++begin;
    }
    return dest;
}
```
#8.remove_copy_if(b,e,d,p)
```
template <class X>
bool fun(const X& x)
{
    return *x>10;
}
template <class In,class Out>
Out remove_copy_if(In begin,In end,Out dest,bool fun(const In&))
{
    while(begin!=end)
    {
        if(!fun(begin))
            *dest++=*begin;

        ++begin;
    }
    return dest;
}
```
#9.replace(b,e,x,y)
```
template <class In,class X>
void replace(In begin,In end,const X& x,const X& y)
{
    while(begin!=end)
    {
        if(*begin==x)
            *begin=y;
        ++begin;
    }
}
```
#10.swap(x,y)
```
template <class X>
void swap(X& x,X& y)
{
    X temp;
    temp=x;
    x=y;
    y=temp;
}
```
#11.reverse
```
template <class In>
void reverse(In begin,In end)
{
    while(begin!=end)
    {
        --end;
        if(begin!=end)
        {
            swap(*begin++,*end);
        }
    }
}
```
#12.binary_search
```
template <class In,class X>
In binary_search(In begin,In end,const X& x)
{
    //the function is return a iterator,and if not find
    //we let it return the second arguments(end)
    while(begin!=end)
    {
        In mid=begin+(end-begin)/2;
        if(*mid<x)
            end=mid;
        else if(x<*mid)
            begin=mid+1;
        else
            return mid;
    }
    return end;
}
```
#13.split
```
/*
bool space(char c)
{
    return isspace(c);
}
bool not_space(char c)
{
    return !isspace(c);
}
*/
template <class Out>
void split(const string& s,Out os)
{
    typedef string::const_iterator iter;
    iter i=s.begin();
    iter e=s.end();
    while(i!=e)
    {
        i=find_if(i,e,not_space);
        iter j=find_if(i,e,space);
        if(i!=e)
            *os++=string(i,j);
        i=j;
    }
}
```
#14.equal(b,e,b2)
```
template <class In>
bool equal(In beg,In end,In beg2)
{
    while(beg!=end)
    {
        if(*beg!=*beg2)
        {
            return false;
        }
        ++beg;
        ++beg2;
    }
    return true;
}
```
#15.transform(b,e,d,f)
```
template <class In,class Out>
Out transform(In beg,In end,Out beg2,,bool fun(In))
{
    while(beg!=end)
    {
        if(fun(beg))
        {
            *beg2=*beg;
            ++beg;
        }
        ++beg2;
        ++beg;
    }
}
```
#16.partition(b,e,p)
```
/*
 *b,e is a bothway iterator;if p return true put the elements into the former of the container,else into the later;
 *return a iterator direct to the first dissatified elements.
*/
template <class Y>
bool fun(Y& x)
{
    return *x<6;
}
template <class X>
void sw(X& x,X& y)
{
    X temp=x;
    x=y;
    y=temp;
}
template <class In>
In partition(In beg,In end,bool fun(In&))
{
    while(beg!=end)
    {
        while(fun(beg))
        {
            ++beg;
            if(beg==end)
                return beg;
        }

        do{
            --end;
            if(beg==end)
                return beg;
        }while(!fun(end));

        sw(*beg,*end);
        ++beg;
    }
    return beg;
}
```
#17.accumulate(b,e,t)
```
template <class In,class X>
X accumulate(In beg,In end,X x)
{
    while(beg!=end)
    {
        x+=*beg;
        ++beg;
    }
    return x;
}
```
