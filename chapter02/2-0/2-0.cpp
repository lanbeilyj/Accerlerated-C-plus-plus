#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout<<"input your name:";
	string name;
	cin>>name;

	cout<<endl<<endl;
	const string greet="Hello, "+name+", I am sorry!";

	const int pad=1;
	const int row=pad*2+3;
	const string::size_type col=greet.size()+pad*2+2;

	for(int r=0;r!=row;++r)
	{
		string::size_type c=0;
		while(c!=col)
		{
			if(r==pad+1 && c==pad+1)
			{
				cout<<greet;
				c+=greet.size();
			}
			else
			{
				if(r==0||r==row-1||c==0||c==col-1)
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
				++c;
			}
		}
		cout<<endl;
	}
	return 0;
}