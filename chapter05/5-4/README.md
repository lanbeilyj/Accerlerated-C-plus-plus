/*
Ans：可以看出5-2使用vector和list编写的程序是有区别的，那就是计算家庭作业成绩的中值算法。因为list容器不支持随机访问，仅支持迭代器的前置和后置的++、--操作，故要编写一样的驱动程序，则需要修改vector程序的median.cpp实现部分即可。对vector实现算法的median.cpp的修改如下：
*/
```
#include "median.h"
#include <algorithm>
using namespace std;
double median(vector<double> hw)
{
    vector<double>::iterator it;
    vector<double>::size_type size=hw.size()/2+1;
    int k=0;
    hw.sort();
    for(vector<double>::iterator it=hw.begin();it!=hw.end();++it)
    {
        k++;
        if(k==size && k%2!=0)
            return *it;
        else if(k==size && k%2==0)
            return ( *(it)+*(--it) )/2;
    }
}
```
