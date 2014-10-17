tips:对以下文件进行简单的功能介绍：

split文件：进行字符串分裂，以便进行短语轮转；

compare文件：sort(begin,end,谓词)的第三个参数谓词，因为短语中忽略大小写；

rotation文件：进行各个短语的轮转，轮转后的集合存储在容器中（本题该轮转集合有八个，故容器有8个string）；

unrotation文件：当然在调用该unrotation函数之前，需要多rotation()之后的轮转集合进行sort()，反向轮转过程如上图3所示；
