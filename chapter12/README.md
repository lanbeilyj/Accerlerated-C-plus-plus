#Exercises

12-0. Compile, execute, and test the programs in this chapter.

12-1. Reimplement the Str class, but choose an implementation strategy that requires that the class manage the storage itself. For example, you might store an array of char and a length. Consider what implications this change in design has for copy control. Also consider the cost of using Vec, (e.g., in storage overhead).

12-2. Implement the c_str, data, and copy functions.

12-3. Define the relational operators for Str. In doing so, you will want to know that the <cstring> header defines a function called strcmp, which compares two character pointers. The function returns a negative integer if the null-terminated character array denoted by the first pointer is less than the second, zero if the two strings are equal, or a positive value if the first string is greater than the second.

12-4. Define the equality and inequality operators for Str.

12-5. Implement concatenation for Str so as not to rely on conversions from const char*.

12-6. Give Str an operation that will let us implicitly use a Str object as a condition. The test should fail if the Str is empty, and should succeed otherwise.

12-7. The standard string class provides random-access iterators to manipulate the string's characters. Add iterators and the iterator operations begin and end to your Str class.

12-8. Add the getline function to the Str class.

12-9. Use class ostream_iterator to reimplement the Str output operator. Why didn't we ask you to reimplement the input operator using class istream_iterator?

12-10. Having seen in §12.1/212 how Str defined a constructor that takes a pair of iterators, we can imagine that such a constructor would be useful in class Vec. Add this constructor to Vec, and reimplement Str to use the Vec constructor instead of calling copy.

12-11. If you add the operations listed in these exercises, then you can use this Str class in all the examples in this book. Reimplement the operations on character pictures from Chapter 5 and the split functions from §5.6/87 and §6.1.1/103.

12-12. Define the insert function that takes two iterators for the Vec and Str classes. 

12-13. Provide an assign function that could be used to assign the values in an array to a Vec. 

12-14. Write a program to initialize a Vec from a string.

12-15. The read_hw function from §4.1.3/57 checked the stream from which it read to determine whether the function had hit end-of-file, or had encountered an invalid input. Our Str input operator does no such check. Why? Will it leave the stream in an invalid state?
