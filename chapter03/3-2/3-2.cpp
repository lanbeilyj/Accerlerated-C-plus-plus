#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	vector<int> vec;
	cout<<"input the num:"<<endl;
	while(cin>>n)
		vec.push_back(n);
	sort(vec.rbegin(),vec.rend());

	typedef vector<int>::size_type size_tp;
	size_tp size=vec.size();
	int block=size/4;

	for(int i=0,j=0;i!=size;++i)
	{
		if(i%block==0)
		{
			++j;
			cout<<endl<<"block "<<j<<"is:"<<endl;
		}
		cout<<vec[i]<<'\t';
	}
	cout<<endl;

	return 0;
}