Ans：如果在while之外定义string s，每次循环后该string s并不会被销毁，故每次循环都会在前次的已有string s基础上进行连接；
但是s+=string(wt-s.size(),' ');又string::size_type wt=width(left)+1;即wt是left中最长字符串长度，大小固定，而当每次循环时string s是累加连接的故导致wt<s.size()，故提示如下错误：
```
terminate called after throwing an instance of 'std::length_error'
  what():  basic_string::_S_create
Aborted (core dumped)
```
