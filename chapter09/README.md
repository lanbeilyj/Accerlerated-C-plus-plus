Exercises
9-0. Compile, execute, and test the programs in this chapter.

9-1. Reimplement the Student_info class so that it calculates the final grade when reading the student's record, and stores that grade in the object. Reimplement the grade function to use this precomputed value.

9-2. If we define the name function as a plain, nonconst member function, what other functions in our system must change and why?

9-3. Our grade function was written to throw an exception if a user tried to calculate a grade for a Student_info object whose values had not yet been read. Users who care are expected to catch this exception. Write a program that triggers the exception but does not catch it. Write a program that catches the exception.

9-4. Rewrite your program from the previous exercise to use the valid function, thereby avoiding the exception altogether.

9-5. Write a class and associated functions to generate grades for students who take the course for pass/fail credit. Assume that only the midterm and final grades matter, and that a student passes with an average exam score greater than 60. The report should list the students in alphabetical order, and indicate P or F as the grade.

9-6. Rewrite the grading program for the pass/fail students so that the report shows all the students who passed, followed by all the students who failed.

9-7. The read_hw function §4.1.3/57 solves a general problem (reading a sequence of values into a vector) even though its name suggests that it should be part of the implementation of Student_info. Of course, we could change its name—but suppose, instead, that you wanted to integrate it with the rest of the Student_info code, in order to clarify that it was not intended for public access despite its apparent generality? How would you do so?


