/*
Ans：根据题意要求返图案实际上是一个近似对称图案。说近似图案是因为：

》当每行字符数都为基数或者偶数时，返回图案是中间对称的；

》否则，即当最长行大小与每行相减所得为基数时，两边是不肯均匀填充的，故左右两边会相差一个填充字符；

*******this is an exercises*******
************answer. to************
***********help people************
to better master the C++ language.
*********have good time!**********
*/
//main.cpp
#include <iostream>
#include <fstream>
#include "new.h"
using namespace std;

int main()
{
    //读取文件
    ifstream infile;
    infile.open("/home/lyj/Desktop/5-5/old.txt",ios::in);
    if(!infile.good())
    {
        cout<<"open error!"<<endl;
        return -1;
    }

    vector<string> old_vec,new_vec;
    string line;

    while(getline(infile,line))
    {
        old_vec.push_back(line);
    }
   	infile.close()

    //调用center，返回新图案
    new_vec=center(old_vec);

    //写文件
    ofstream outfile;
    outfile.open("/home/lyj/Desktop/5-5/new.txt",ios::out);
    if(!outfile.good())
        return -1;
    for(vector<string>::const_iterator it=new_vec.begin();it!=new_vec.end();++it)
    {
        outfile<<*it<<'\n';
    }
    outfile.close();
}
