//mian
#include <iostream>
#include <vector>
#include "read.h"
using namespace std;
int main()
{
	vector<string> words;
	int n=read(cin,words);

	cout<<"the total words is:"<<words.size()<<endl;
	vector<string>::const_iterator i,j,first=words.begin(),second=words.end();

	for(i=first;i!=second;++i)
	{
		string tmpi=*i;
		int k=1;
		for(j=i+1;j!=second;++j)
		{
		    string tmpj=*j;
			if(tmpi==tmpj)
				++k;
		}
		cout<<tmpi<<string(n-tmpi.size()+1,' ')<<k<<endl;//string(n,' ')word和其出现次数之间有合适的间隔
	}
	return 0;
}