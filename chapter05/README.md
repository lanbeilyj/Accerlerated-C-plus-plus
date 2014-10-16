#Exercises

5-0. Compile, execute, and test the programs in this chapter.

5-1. Design and implement a program to produce a permuted index. A permuted index is one in which each phrase is indexed by every word in the phrase. So, given the following input,
```
The quick brown fox 
jumped over the fence
```
the output would be
```
      The quick     brown fox 
jumped over the     fence
The quick brown     fox 
                    jumped over the fence
         jumped     over the fence
            The     quick brown fox 
    jumped over     the fence
                    The quick brown fox
```
A good algorithm is suggested in The AWK Programming Language by Aho, Kernighan, and Weinberger (Addison-Wesley, 1988). That solution divides the problem into three steps:

Read each line of the input and generate a set of rotations of that line. Each rotation puts the next word of the input in the first position and rotates the previous first word to the end of the phrase. So the output of this phase for the first line of our input would be 
```
The quick brown fox
quick brown fox The
brown fox The quick
fox The quick brown
```
Of course, it will be important to know where the original phrase ends and where the rotated beginning begins. 
Sort the rotations. 
Unrotate and write the permuted index, which involves finding the separator, putting the phrase back together, and writing it properly formatted.
Tips:<br>
[![](https://github.com/CNhoward/Accerlerated-C-plus-plus/blob/master/chapter05/images/1.jpg)
[![](https://github.com/CNhoward/Accerlerated-C-plus-plus/blob/master/chapter05/images/2.jpg)
[![](https://github.com/CNhoward/Accerlerated-C-plus-plus/blob/master/chapter05/images/3.jpg)
5-2. Write the complete new version of the student-grading program, which extracts records for failing students, using vectors. Write another that uses lists. Measure the performance difference on input files of ten lines, 1,000 lines, and 10,000 lines.

5-3. By using a typedef, we can write one version of the program that implements either a vector-based solution or a list-based one. Write and test this version of the program.

5-4. Look again at the driver functions you wrote in the previous exercise. Note that it is possible to write a driver that differs only in the declaration of the type for the data structure that holds the input file. If your vector and list test drivers differ in any other way, rewrite them so that they differ only in this declaration.

5-5. Write a function named center(const vector<string>&) that returns a picture in which all the lines of the original picture are padded out to their full width, and the padding is as evenly divided as possible between the left and right sides of the picture. What are the properties of pictures for which such a function is useful? How can you tell whether a given picture has those properties?

5-6. Rewrite the extract_fails function from §5.1.1/77 so that instead of erasing each failing student from the input vector v, it copies the records for the passing students to the beginning of v, and then uses the resize function to remove the extra elements from the end of v. How does the performance of this version compare with the one in §5.1.1/77?

5-7. Given the implementation of frame in §5.8.1/93, and the following code fragment
```
vector<string> v;
frame(v);
```
describe what happens in this call. In particular, trace through how both the width function and the frame function operate. Now, run this code. If the results differ from your expectations, first understand why your expectations and the program differ, and then change one to match the other.

5-8. In the hcat function from §5.8.3/95, what would happen if we defined s outside the scope of the while? Rewrite and execute the program to confirm your hypothesis.

5-9. Write a program to write the lowercase words in the input followed by the uppercase words.

5-10. Palindromes are words that are spelled the same right to left as left to right. Write a program to find all the palindromes in a dictionary. Next, find the longest palindrome.

5-11. In text processing it is sometimes useful to know whether a word has any ascenders or descenders. Ascenders are the parts of lowercase letters that extend above the text line; in the English alphabet, the letters b, d, f, h, k, l, and t have ascenders. Similarly, the descenders are the parts of lowercase letters that descend below the line; In English, the letters g, j, p, q, and y have descenders. Write a program to determine whether a word has any ascenders or descenders. Extend that program to find the longest word in the dictionary that has neither ascenders nor descenders.
