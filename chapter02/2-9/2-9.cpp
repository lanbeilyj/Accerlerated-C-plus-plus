#include <iostream>
using namespace std;
int main()
{
	cout<<"input m,n:";
	int m,n;
	cin>>m>>n;
	cout<<endl;
	if(m>n)
		cout<<"the max is: "<<m;
	else
		cout<<"the max is: "<<n;
	return 0;
}