/*
Ans：从double d=f(0[n]可以看出，该表达式的结果为一个double值，对f()[n]，将f()看做arr，即arr[n]，实际上是一个数组第n项的值；而arr是一个数组名，也表示数组的首地址，所以f()其实可以表示为f()=arr，故f()返回的是一个指针类型。
如下：
*/
#include <iostream>
using namespace std;

double *f()
{
	static double arr[7]={1,2,3,4,5,6,7};
	return arr;
}

int main()
{	
	for(int i=0;i!=7;++i)
	{
		double d=f()[i];
		cout<<"f()["<<i<<"]="<<d<<endl;
	}
	return 0;
}