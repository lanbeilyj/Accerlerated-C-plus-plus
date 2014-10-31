#include <iostream>
#include "Str.cpp"
#include "Vec.h"
#include <cctype>
using namespace std;
Vec<Str> split(const Str& s)
{
	Vec<Str> ret;
	Str::size_type i=0;
	while(i!=s.size())
	{
		while(i!=s.size() && isspace(s[i]))++i;
		Str::size_type j=i;
		while(j!=s.size() && !isspace(s[j]))++j;
		if(j!=i)
		{
			ret.push_back(s.substr(i,j-i));
			i=j;
		}
	}
	return ret;
}
int main()
{
	Str s="I am a bad boy";
    Vec<Str> vec=split(s);
    for(Vec<Str>::size_type i=0;i!=vec.size();++i)
        cout<<vec[i]<<endl;

	return 0;
}
