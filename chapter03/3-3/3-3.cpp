#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	string word;
	int value;
	map<string,int> vec;
	cout<<"input the words:"<<endl;
	while(cin>>word)
	{
		++vec[word];
	}
	for(map<string,int>::const_iterator it=vec.begin();
		it!=vec.end();++it)
	{
		cout<<it->first<<" input "<<it->second<<" times"<<endl;
	}

	return 0;
}