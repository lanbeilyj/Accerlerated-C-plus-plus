#include <iostream>
#include "picture.h"
#include <string>
#include <vector>
using namespace std;

int main()
{
    cout << "start! input strings:" << endl;

    vector<string> v;
    v.push_back("this is a test");
    v.push_back("can you");
    v.push_back("see? yeah yeah yeah!!!!");

    Picture p(v);
    Picture q=frame(p);
    Picture r=hcat(p,q);
    Picture s=vcat(q,r);

    cout<<q<<endl;
    cout<<frame(hcat(s,vcat(r,q))) << endl;

    return 0;
}
