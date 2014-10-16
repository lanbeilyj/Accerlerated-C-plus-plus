Exercises
1-0. Compile, execute, and test the programs in this chapter.

1-1. Are the following definitions valid? Why or why not?

const std::string hello = "Hello";
const std::string message = hello + ", world" + "!";
1-2. Are the following definitions valid? Why or why not?

const std::string exclam = "!";
const std::string message = "Hello" + ", world" + exclam;
1-3. Is the following program valid? If so, what does it do? If not, why not?

#include <iostream>
#include <string>

int main()
{
    { const std::string s = "a string";
      std::cout << s << std::endl; }
   
    { const std::string s = "another string";
      std::cout << s << std::endl; }
    return 0;
}
1-4. What about this one? What if we change }} to };} in the third line from the end?

#include <iostream>
#include <string>

int main()
{
    { const std::string s = "a string";
      std::cout << s << std::endl;
    { const std::string s = "another string";
      std::cout << s << std::endl; }}
    return 0;
}
1-5. Is this program valid? If so, what does it do? If not, say why not, and rewrite it to be valid.

#include <iostream>
#include <string>

int main()
{
    { std::string s = "a string";
    { std::string x = s + ", really";
    std::cout << s << std::endl; }
    std::cout << x << std::endl;
    }
    return 0;
}
1-6. What does the following program do if, when it asks you for input, you type two names (for example, Samuel Beckett)? Predict the behavior before running the program, then try it.

#include <iostream>
#include <string>

int main()
{
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name
              << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout << "Hello, " << name
              << "; nice to meet you too!" << std::endl;
    return 0;
}

