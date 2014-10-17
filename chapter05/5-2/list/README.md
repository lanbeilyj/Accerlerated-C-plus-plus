b、使用list容器
```
》list容器不支持随机访问只能顺序的访问，即不支持索引操作，不支持迭代器的算术运算，只支持迭代器的前置和后置的++、--、==、！=运算；

》list容器删除元素只会使指向被删除的元素的迭代器失效；

》list容器sort操作，与vector不同，list<double> stu; stu.sort(compare); 没有迭代器范围，且需要指定比较谓词；
```
将Student_info.h/cpp、grade.h/cpp、extract_fails.h/cpp、median.h、main.cpp的vector替换为list；因为，将median.cpp修改如下：
```
#include "median.h"
#include <algorithm>
using namespace std;
double median(list<double> hw)
{
    list<double>::iterator it;
    list<double>::size_type size=hw.size()/2+1;
    int k=0;
    hw.sort();
    for(list<double>::iterator it=hw.begin();it!=hw.end();++it)
    {
        k++;
        if(k==size && k%2!=0)
            return *it;
        else if(k==size && k%2==0)
            return ( *(it)+*(--it) )/2;
    }
}
```
用list容器运行时间如下：
10行                    0.000054s

1000行                0.004772s

10000行              0.043197s

结论：比较两个时间记录表，可知当需要处理的数据较少时两者效率差别不大，但当处理大量数据时list的效率就体现出来了，其效率将比vector容器高的多。
