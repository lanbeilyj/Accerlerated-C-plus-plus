#Exercises

13-0. Compile, execute, and test the programs in this chapter.

13-1. Annotate the Core and Grad constructors to write the constructor's name and argument list when the constructor is executed. For example, you should add a statement such as
```
cerr << "Grad::Grad(istream&)" << endl;
```
to the Grad constructor taking an istream& parameter. Then write a small program that exercises each constructor. Predict beforehand what the output will be. Revise your program and predictions until your predictions match what is actually written.

13-2. Given the Core and Grad classes defined in this chapter, indicate which function is called for each of these invocations:
```
Core* p1 = new Core;
Core* p2 = new Grad;
Core s1;
Grad s2;

p1->grade();
p1->name();

p2->grade();
p2->name();

s1.grade();
s1.name();

s2.name();
s2.grade();
```
Check whether you are correct by adding output statements to the name and grade functions that indicate which function is being executed.

13-3. The class that we built in Chapter 9 included a valid member that allowed users to check whether the object held values for a student record or not. Add that functionality to the inheritance-based system of classes.

13-4. Add to these classes a function that will map a numeric grade to a letter grade according to the grading policy outlined in §10.3/177.

13-5. Write a predicate to check whether a particular student met all the relevant requirements. That is, check whether a student did all the homework, and if a graduate student, whether the student wrote a thesis.

13-6. Add a class to the system to represent students taking the course for pass/fail credit. Assume that such students need not do the homework, but might do so. If they do, the homework should participate in determining whether they passed or failed, according to the normal formula. If they did no homework, then the grade is the average of their midterm and final grades. A passing grade is 60 or higher.

13-7. Add a class to the system to represent students auditing the course.

13-8. Write a program to generate a grade report that can handle all four kinds of students.

13-9. Describe what would happen if the assignment operator in §13.4.2/247 failed to check for self-assignment.
