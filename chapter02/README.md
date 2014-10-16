Exercises
2-0. Compile and run the program presented in this chapter.

2-1. Change the framing program so that it writes its greeting with no separation from the frame.

2-2. Change the framing program so that it uses a different amount of space to separate the sides from the greeting than it uses to separate the top and bottom borders from the greeting.

2-3. Rewrite the framing program to ask the user to supply the amount of spacing to leave between the frame and the greeting.

2-4. The framing program writes the mostly blank lines that separate the borders from the greeting one character at a time. Change the program so that it writes all the spaces needed in a single output expression.

2-5. Write a set of "*" characters so that they form a square, a rectangle, and a triangle.

2-6. What does the following code do?

int i = 0;
while (i < 10) {
    i += 1;
    std::cout << i << std::endl;
}
2-7. Write a program to count down from 10 to -5 .

2-8. Write a program to generate the product of the numbers in the range [1, 10).

2-9. Write a program that asks the user to enter two numbers and tells the user which number is larger than the other.

2-10. Explain each of the uses of std:: in the following program:

int main() {
int k =  0;
    while (k != n) {             // invariant: we have written k asterisks so far
        using std::cout;
        cout << "*";
        ++k;
    }
    std::cout << std::endl;      // std:: is required here
    return 0;
}
