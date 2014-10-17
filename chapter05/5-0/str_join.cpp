//str_join.cpp
#include "str_join.h"
#include <iostream>
using namespace std;

string::size_type width(const vector<string>& v)
{
	string::size_type maxlen=0;
	for(vector<string>::const_iterator it=v.begin();
		it!=v.end();++it)
	{
		string::size_type size=(*it).size();
		if(maxlen<size)
			maxlen=size;
	}
	return maxlen;
}

vector<string> frame(const vector<string>& v)
{
	vector<string> ret;
	string::size_type sz=width(v);
	string border(sz+4,'*');
	ret.push_back(border);

	for(vector<string>::const_iterator it=v.begin();
		it!=v.end();++it)
	{
		ret.push_back("* "+*it+string(sz-(*it).size(),' ')+" *");
	}

	ret.push_back(border);
	return ret;
}

vector<string> hcat(const vector<string>& left,const vector<string>& right)
{
	vector<string> ret;
	string::size_type wt=width(left)+1;

	vector<string>::size_type i=0,j=0;
	while(i!=left.size()||j!=right.size())
	{
		string s;
		if(i!=left.size())
			s=left[i++];
		s+=string(wt-s.size(),' ');
		if(j!=right.size())
			s+=right[j++];
		ret.push_back(s);
	}

	return ret;
}