#include <iostream>
#include "Str.cpp"
#include <vector>
#include <cctype>
using namespace std;
vector<Str> split(const Str& s)
{
	vector<Str> ret;
	Str::size_type size=s.size(),i=0;
	while(i!=size)
	{
		while(i!=size && isspace(s[i]))++i;
		Str::size_type j=i;
		while(j!=size && !isspace(s[j]))++j;
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
    vector<Str> vec=split(s);
    for(vector<Str>::size_type i=0;i!=vec.size();++i)
        cout<<vec[i]<<endl;

	return 0;
}
