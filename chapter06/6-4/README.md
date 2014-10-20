#two possible ways to correct the program
Eg1.
```
 #include <iostream>
 #include <vector>
 #include <algorithm>
 using namespace std;
 int main()
 {
    vector<int> v(10,100);
    vector<int> u;

    copy(v.begin(),v.end(),back_inserter(u));

    for(vector<int>::const_iterator i=u.begin();i!=u.end();++i)
    {
    	cout<<*i<<" ";
    }
    cout<<u.size()<<endl;
    return 0;
 }
```

Eg2.
replace Eg1's copy() function as follows:
```
vector<int> u=v;
```
or
```
vector<int> u(v.begin(),v.end());
```
#advantages and disadvantages:
1.using the iterator adapter back_inserter（vector），it uses the vector as its' arguments and return an iterator as a destination，insert an element to the back;and also when it is no use compacity to store new elements,then it will expand its compacity to make sure it can hold these news.Actually, it is an expanded copy operators;
2.direct assignment by an equal sign(vector<int> u=v),it is actually execute by two steps:
```"
first:  execute u.erase(u.bagin(),u.end());
second: execute u.insert(v.begin(),v.end(),u.begin());
```
we can see the efficiency of clause "vector<int> u=v;" may a bit lower then clause"vector<int> u(v.begin(),v.end());"
