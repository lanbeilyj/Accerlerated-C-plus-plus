#include <iostream>
#include <vector>
#include <ios>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	cout<<"input name:";
	string name;
	cin>>name;
	cout<<endl;

	cout<<"input your midterm & final score:";
	double midterm,fin;
	cin>>midterm>>fin;
	cout<<endl;

	cout<<"input your homework scores:"<<endl;
	vector<double> homework;
	double hw;
	while(cin>>hw)
	{
		homework.push_back(hw);
	}
	cout<<endl;

	sort(homework.begin(),homework.end());//sort the homework score
	typedef vector<double>::size_type size_tp;
	size_tp size=homework.size();//homework size
	int mid=size/2;
	double mid_hw=size%2==0?(homework[mid-1]+homework[mid])/2:homework[mid];
	
	streamsize proc=cout.precision();
	cout<<setprecision(4)<<"the score is:"<<0.4*fin+0.4*mid_hw+0.2*midterm<<
		setprecision(proc)<<endl;
	return 0;
}