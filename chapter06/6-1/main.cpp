//main.cpp
#include "str_join.h"
#include <iostream>
using namespace std;

int main()
{
	string str;
	vector<string> vec;
	vector<string> vec_f;
	vector<string> vec_j;

	while(getline(cin,str))
		vec.push_back(str);
	vec_f=frame(vec);

	vec_j=hcat(vec,vec_f);

	for(vector<string>::const_iterator it=vec_j.begin();
		it!=vec_j.end();++it)
	{
		cout<<endl<<*it<<endl;
	}

	return 0;
}
