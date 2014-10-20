#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v(10,100);
    vector<int> u;
    //copy(v.begin(),v.end(),u.begin())
    //u为空，而上述copy功能只是为u中已经存在的元素进行复制，而u为空，故运行时会提示段错误，即给一个不存在的元素复制。

    //利用迭代器适配器back_inserter（vector），用容器作为参数并产生一个迭代器最为目的地，向容器末尾添加元素
    //不仅复制而且当目的容器空间不足时，会对其进行扩展，即它是一种扩展的复制
    copy(v.begin(),v.end(),back_inserter(u));
    for(vector<int>::const_iterator i=u.begin();i!=u.end();++i)
    {
    	cout<<*i<<" ";
    }
    cout<<u.size()<<endl;
    return 0;
}
