/*
Ans：setw(n)，设置位于其后的字段的域宽；如果该字段宽度小于设置的值n，则用空格补齐（默认右对齐，设置左对齐则用left指示即可）；如果该字段宽度大于设置的n值，则忽略setw(n)设置。
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int f;
	for(int i=1;i<=100;++i)
	{
		cout<<i<<setw(7)<<i*i<<endl;
	}

	return 0;
}