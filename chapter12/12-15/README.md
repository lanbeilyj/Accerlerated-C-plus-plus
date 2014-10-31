The read function in class Str is:
```
std::istream& operator>> (std::istream& is,Str& s)
{
    s.data.clear();
    char c;

    while(is.get(c) && isspace(c));

    if(is)
    {
        do
        {
            s.data.push_back(c);
        }while(is.get(c) && !isspace(c));

        if(is)
            is.unget();
    }

    return is;
}
```
we use the get() to get a char and if there is an invalid input it will not work and return directly.
In 4.1.3,we need to input the homework in cycle,if we do not use cin.clear(),the invlaid cin will refuse the next student's input.
