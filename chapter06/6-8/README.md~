#analysis
From the descript,it lets us classify the students into two parts,one did the homework,another not did;and this is just like the extracts_fails' function did.so we can do the same.programming as follows:
```
//add this part in Student_info.cpp
bool didnt_all_hw(const Student_info& s)
{
	return !did_all_hw(s);
}
```
```
//modify the main.cpp int 6-0
vector<Student_info> did;
Student_info s;
while(read(cin,s))
	did.push_back(s);
vector<Student_info>::const_iterator iter;
iter=stable_partition(s.begin(),s.end(),didnt_all_hw);
vector<Student_info> didnt(iter,s.end());
did.erase(iter,s.end());
```


