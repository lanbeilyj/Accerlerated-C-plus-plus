#include <iostream>
#include <iomanip>
using namespace std;
int nSize(int n)
{
	int k=0;
	while(n>0)
	{
		n/=10;
		++k;
	}
	return k;
}
int main()
{
	double f,n=99,k=0;//修改int为double
	for(double i=1;i<=n;i=i+0.5)//修改i=i+0.5
	{
		cout<<setw( nSize(n)*3 )<<setiosflags(ios::left)<<i<<i*i<<endl;//修改setw(nSize(n)*3
	}

	return 0;
}