Exercises
15-0. Compile, execute, and test the programs in this chapter. 

15-1. Test your system by writing a program that executes

Picture p = // some initial starting picture
Picture q = frame(p);
Picture r = hcat(p, q) ;
Picture s = vcat(q, r);
cout  <<  frame(hcat(s, vcat(r, q))) << endl;
15-2. Reimplement the Frame_Pic class so that the frame uses three different characters: one for the corners, another for the top and bottom borders, and a third for the side borders.

15-3. Give users the option to specify what characters to use for these border characters.

15-4. Add an operation to reframe a Picture, which changes the frame characters. The operation should change all of the frames in the interior picture.

15-5. Reimplement HCat_Pic so that when pictures of a different size are concatenated, the shorter one is centered in the space consumed by the longer one. That is, if we horizontally concatenate two pictures, one of which is four lines long and the other is two lines long, the first and last rows of the output picture will be blank on the side of the shorter picture. What can we now conclude about the necessity of the tests between row and 0.

15-6. The Vec and str classes that we developed in Chapters 11 and 12 are powerful enough to be used to implement Pictures. Reimplement the material in this chapter to use Vec<str> instead of vector<string>, and test your implementation.


