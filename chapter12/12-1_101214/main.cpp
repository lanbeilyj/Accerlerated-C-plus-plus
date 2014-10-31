#include <iostream>
#include "Str.cpp"

using namespace std;

int main()
{
    Str s;
    cout<<"input:";
    getline(cin, s);
    cout<<s<<" size "<<s.size()<<endl;

    char arr[100] = {0};
    const char* c_str = s.c_str();
    const char* data = s.data();
    cout<<c_str<<" "<<data<<" "<<s.copy(arr, 99)<<" "<<arr<<endl;

    Str x="A",y="B",z="A";
    cout<< (x<y) <<endl;
    cout<< (z==y) <<endl;

    Str s0="Hello,";
    s0.insert(s0.end(), s.begin(), s.end());
    cout<<s0<< endl;

    ostream_iterator<char> out_it(cout, "");
    out_it<< s0;

  return 0;
}
