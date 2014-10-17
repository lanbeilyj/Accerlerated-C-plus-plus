//median.cpp
#include "median.h"
#include <algorithm>
using namespace std;
double median(vector<double> hw)
{
    typedef vector<double>::size_type size_tp;
    size_tp size=hw.size();
    size_tp mid=size/2;

    sort(hw.begin(),hw.end());

    return size%2==0?(hw[mid]+hw[mid+1])/2:hw[mid];

}