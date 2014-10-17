//palindrome.cpp
#include "palindrome.h"
using namespace std;

bool is_palindrome(const string& s)
{
    typedef string::size_type size_tp;
    size_tp i,j=s.size()-1;
    for(i=0;i!=j;++i,--j)
    {
        if(s[i]!=s[j])
            return false;
    }
    return true;
}