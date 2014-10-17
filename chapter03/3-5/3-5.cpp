#include <iostream>
#include <vector>
#include <string>
#define H 3//家庭作业成绩的个数
using namespace std;
int main()
{
	unsigned int n;//学生个数n
	cout<<"input the total stu nums:";
	cin>>n;
	if(n<=0)
	{
		cout<<"n must be an unsigned int!"<<endl;
		return 1;
	}

	vector<string> vecName;
	vector<double> vecScore;
	while(n>0)
	{
		string name;
		double midterm,fin,homework;
		double hwScore=0,total=0;
		int k=0;
		cout<<"input name:";
		cin>>name;
		vecName.push_back(name);//name
		cout<<endl<<"input midterm & final score:";
		cin>>midterm>>fin;

		cout<<endl<<"input homework score:"<<endl;
		while( k<H && (cin>>homework) )
		{
			hwScore+=homework;
			++k;
		}
		total=0.4*fin+0.2*midterm+0.4*(hwScore/k);
		vecScore.push_back(total);//total score

		--n;
	}
	typedef vector<double>::size_type size_tp;
	size_tp size=vecScore.size();
	for(int i=0;i!=size;++i)
	{
		cout<<vecName[i]<<"-----"<<vecScore[i]<<endl;
	}
	return 0;
}