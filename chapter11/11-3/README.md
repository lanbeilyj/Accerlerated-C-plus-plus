When we use = to give an initial value to a variable, we are invoking the copy constructor. When we use it in an assignment expression, we're calling operator=. The synthesized assignment operator for Student_info objects do is:it invokes the string and vector copy constructors to copy the name and homework members respectively. It copies the two double values, midterm and final, directly.

