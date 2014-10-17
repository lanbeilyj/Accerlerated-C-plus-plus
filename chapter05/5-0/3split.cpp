#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
vector<string> split(const string& s)
{
	vector<string> ret;
	string::size_type size=s.size(),i=0,j;
	while(i!=size)
	{
		while(i!=size && isspace(s[i]))++i;
		j=i;
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
	string str;
	vector<string> vec;
	while(getline(cin,str))
		vec=split(str);
	for(vector<string>::const_iterator it=vec.begin();
		it!=vec.end();++it)
		cout<<*it<<endl;
	return 0;
}