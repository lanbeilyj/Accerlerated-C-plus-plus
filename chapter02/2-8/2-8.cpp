#include <iostream>
using namespace std;
int main()
{
	cout<<"9*9 Table"<<endl<<endl;
	for(int i=1;i<=9;++i)
	{
		for(int j=1;j<=i;++j)
		{
			cout<<i<<"*"<<j<<"="<<i*j<<'\t';
		}
		cout<<endl;
	}
	return 0;
}