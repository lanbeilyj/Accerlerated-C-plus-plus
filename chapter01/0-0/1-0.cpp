#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout<<"input your name:";
	string name;
	cin>>name;

	const string greet="Hello, "+name+"!";
	const string row3="* "+greet+" *";
	const string row2Space(greet.size()+2,' ');
	const string row2="*"+row2Space+"*";
	const string row1(row2.size(),'*');

	cout<<row1<<endl<<row2<<endl<<row3<<endl<<row2<<endl<<row1<<endl;

	return 0;
}