Ans：思路首先从文件逐个读取单词存储于一个string中，但是没有一个现成的接口来进行单词大小写判断，故利用<cctype>中的isupper()和islower()来对单词每个字符进行判断，若所有单词字符都是大写则将其存入容器vector<string> upper中，若不全是大写则存储在容器vector<string> lower中。

输出如下：
lyj@qt:~/Desktop/5-9/bin/Debug$ ./5-9
PROGRAMME I AM A USTC SICT COLD IN
this a test to test the student of the and weather is very she is a beautiful girl and her school she is in the 
