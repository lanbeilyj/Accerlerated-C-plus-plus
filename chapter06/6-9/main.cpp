#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <iterator>
using namespace std;

int main()
{
    string s;
    vector<string> vs;
    while(cin>>s)
        vs.push_back(s);

    string t("");
    t=accumulate(vs.begin(),vs.end(),t);

    cout<<endl<<t<<endl;
    return 0;
}
