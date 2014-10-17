#include <iostream>
#include <string>
using namespace std;
int main()
{
	int r,c;
	cout<<"the r*c you want:";
	cin>>r>>c;

	for(int i=0;i!=r;++i)
	{
	if(i<=c)
	{
		const string sp(c-i,' ');
		const string star(i,'*');
		cout<<sp<<star<<endl;
	}
	}
	return 0;
}