#ifndef median_H
#define median_H
#include <vector>
#include <algorithm>
#include <stdexcept>
using namespace std;
template <class T,class In>
T median(In beg,In end)
{
	if(beg==end)
		throw domain_error ("median of an empty vector");

   	vector<T> v;
	for(;beg!=end;++beg)
		v.push_back(*beg);

	sort(v.begin(),v.end());

	size_t mid=v.size()/2;

	T m=(v.size()%2==0)?(v[mid]+v[mid-1])/2:v[mid];

    return m;
}
#endif // median_H
