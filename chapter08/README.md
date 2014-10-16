Exercises
8-0. Compile, execute, and test the programs in this chapter.

8-1. Note that the various analysis functions we wrote in §6.2/110 share the same behavior; they differ only in terms of the functions they call to calculate the final grade. Write a template function, parameterized by the type of the grading function, and use that function to evaluate the grading schemes.

8-2. Implement the following library algorithms, which we used in Chapter 6 and described in §6.5/121. Specify what kinds of iterators they require. Try to minimize the number of distinct iterator operations that each function requires. After you have finished your implementation, see §B.3/321 to see how well you did.

equal(b, e, d)                 search(b, e, b2, e2)
find(b, e, t)                  find_if(b, e, p)
copy(b, e, d)                  remove_copy(b, e, d, t)
remove_copy_if(b, e, d, p)     remove(b, e, t)
transform(b, e, d, f)          partition(b, e, p)
accumulate(b, e, t)
8-3. As we learned in §4.1.4/58, it can be expensive to return (or pass) a container by value. Yet the median function that we wrote in §8.1.1/140 passes the vector by value. Could we rewrite the median function to operate on iterators instead of passing the vector? If we did so, what would you expect the performance impact to be?

8-4. Implement the swap function that we used in §8.2.5/148. Why did we call swap rather than exchange the values of *beg and *end directly? Hint: Try it and see.

8-5. Reimplement the gen_sentence and xref functions from Chapter 7 to use output iterators rather than writing their output directly to a vector<string>. Test these new versions by writing programs that attach the output iterator directly to the standard output, and by storing the results in a list<string> and a vector<string>.

8-6. Suppose that m has type map<int, string>, and that we encounter a call to copy(m.begin(), m.end(), back_inserter(x)). What can we say about the type of x? What if the call were copy(x.begin(), x.end(), back_inserter(m)) instead?

8-7. Why doesn't the max function use two template parameters, one for each argument type?

8-8. In the binary_search function in §8.2.6/148, why didn't we write (begin + end) / 2 instead of the more complicated begin + (end - begin) /2?


