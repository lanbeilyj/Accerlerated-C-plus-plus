#include "read_hw.h"
using namespace std;

istream& read_hw(istream& is,vector<double>& hw)
{
	if(is)
	{
		hw.clear();
		double x;
		while(is>>x)
			hw.push_back(x);
		is.clear();
	}
	return is;
}
