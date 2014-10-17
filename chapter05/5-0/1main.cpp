//classify the students by grades
//fgrade(vector<Student_info>& s),classify students into two parts,fail and pass;file be placed in grade.h/.cpp
bool fgrade(vector<Student_info>& s)
{
return grade(s)<60;
}
//1.store by two new vector:fail and pass;this function was placed in Student_info.h/.cpp
vector<Student_info> extract_fails(vector<Student_info>& s)
{
    vector<Student_info> fail,pass;
    typedef vector<Student_info>::size_type size_tp;
    size_tp size=s.size();
    for(int i=0;i<size;++i)
    {
        if(fgrade(s[i]))
            fail.push_back(s[i]);
        else
            pass.push_back(s[i]);
    }
    s=pass;
    return fail;
}
//2.use one new vector to store fail students,pass still in old vector;this function was placed in Student_info.h/.cpp
vector<Student_info> extract_fails(vector<Student_info>& s)
{
    vector<Student_info> fail,pass;
    typedef vector<Student_info>::size_type size_tp;
    for(size_tp i=0;i<s.size();)
    {
        if(fgrade(s[i]))
        {
            fail.push_back(s[i]);
            i=s.erase(s.begin()+i);
        }
        else
            ++i;
    }
    return fail;
}
//3.use the iterator instead the index;file still be placed in Student_info.h/.cpp
vector<Student_info> extract_fails(vector<Student_info>& s)
{
    vector<Student_info> fail;
    
    for(vector<Student_info>::iterator it=s.begin();it!=s.end();)
    {
        if(fgrade(it))
        {
            fail.push_back(*it);
            it=s.erase(it);
        }
        else
            ++it;
    }
    return fail;
}
//4.new data Structure--list  to improve the efficiency
list<Student_info> extract_fails(list<Student_info>& s)
{
    list<Student_info> fail;
    
    for(list<Student_info>::iterator it=s.begin();it!=s.end();)
    {
        if(fgrade(it))
        {
            fail.push_back(*it);
            it=s.erase(it);
        }
        else
            ++it;
    }
    return fail;
}