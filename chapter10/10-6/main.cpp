#include <iostream>
#include "String_list.h"
using namespace std;

String_list<string> split(const string& s)
{
	String_list<string> ret;
	string::size_type size=s.size(),i=0,j;
	while(i!=size)
	{
		while(i!=size && isspace(s[i]))++i;
		j=i;
		while(j!=size && !isspace(s[j]))++j;
		if(j!=i)
		{
			ret.insertList(s.substr(i,j-i));
			i=j;
		}
	}
	return ret;
}

int main()
{
    string s="Hello C++! Welcome to my CS world!";
    String_list<string> sl=split(s);
    sl.printList();
    return 0;
}
