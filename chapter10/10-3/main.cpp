#include <iostream>
#include "median.h"
using namespace std;

int main()
{
    vector<int> v0;
    int n;
    while(cin>>n)
        v0.push_back(n);
    cout<<"the median is: "<<median<int>(v0.begin(),v0.end())<<endl;

    return 0;
}
