//median.cpp
#include <algorithm>
#include "Vec.h"
#include <stdexcept>

using namespace std;
double median(Vec<double> vec)
{
	typedef Vec<double>::size_type vec_sz;
	vec_sz size=vec.size();

	if(size==0)
		throw domain_error ("median of an empty Vec");

	sort(vec.begin(),vec.end());

	vec_sz mid=size/2;
	return size%2==0?(vec[mid-1]+vec[mid])/2:vec[mid];
}
