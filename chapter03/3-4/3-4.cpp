#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<string> vec;
	string str;
	cout<<"input a strings:"<<endl;
	while(cin>>str)
		vec.push_back(str);
	vector<string>::const_iterator it=vec.begin();
	int min=(*it).size(),max=0;
	for(;it!=vec.end();++it)
	{
		int size=(*it).size();
		if(size>max)
			max=size;
		if(min>size)
			min=size;
	}

	cout<<"min="<<min<<"\nmax="<<max<<endl;
	return 0;
}