#include <iostream>
#include <vector>
using namespace std;
int main()
{	
	double n;
	vector<double> vec;
	while(cin>>n)
		vec.push_back(n);
	
	typedef vector<double>::size_type sz;
	sz size=vec.size();
	
	double avg=0;
	for(vector<double>::const_iterator it=vec.begin();
		it!=vec.end();++it)
		avg+=(*it);
	
	cout<<"avg="<<avg/size<<endl;

	return 0;
}