/*
Ans：由4-2分析可知，为了具有更好适应性，设置域宽为，这样即使最后一列999宽为3，仍然与第二列有两个空白间隔。程序修改如下：
*/
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
	int f,n=999;
	for(int i=1;i<=n;++i)
	{
		cout<<setw( nSize(n)+2 )<<setiosflags(ios::left)<<i<<i*i<<endl;
	}

	return 0;
}