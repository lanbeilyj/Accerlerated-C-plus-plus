Exercises

0-0. Compile and run the Hello, world! program.

0-1. What does the following statement do?
3 + 4;

0-2. Write a program that, when run, writes
This (") is a quote, and this (\) is a backslash.

0-3. The string literal "\t" represents a tab character; different C++ implementations display tabs in different ways. Experiment with your implementation to learn how it treats tabs.

0-4. Write a program that, when run, writes the Hello, world! program as its output.

0-5. Is this a valid program? Why or why not? 
#include <iostream>
int main()   std::cout << "Hello, world!" << std::endl;

0-6. Is this a valid program? Why or why not?
#include <iostream>
int main()   {{{{{{ std::cout << "Hello, world!" << std::endl; }}}}}}

0-7. What about this one?
#include <iostream>
int main() 
{
    /* This is a comment that extends over several lines
        because it uses /* and */ as its starting and ending delimiters */
    std::cout << "Does this work?" << std::endl;
    return 0; 
}

0-8. ...and this one?
#include <iostream>
int main()
{
    // This is a comment that extends over several lines
    // by using // at the beginning of each line instead of using /*
    // or */ to delimit comments.
    std::cout << "Does this work?" << std::endl;
    return 0;
}

0-9. What is the shortest valid program?

0-10. Rewrite the Hello, world! program so that a newline occurs everywhere that whitespace is allowed in the program.

