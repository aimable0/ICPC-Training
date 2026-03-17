/* A program that calculates the factorial of a number */
#include <iostream>

using namespace std;

int factorial(int);

int main(void)
{
    int x = 5;
    int fact = factorial(x);
    cout << x << "! = " << fact << "\n";

    return 0;
}

// factorial of 5 = 5 * 4 * 3 * 2 * 1
int factorial(int x)
{
    if (x == 1)
        return 1;
    return x * factorial(x - 1);
}


// Recap about functions in C++
/**
 * A lot seems to be the same as in C
 * the diferences are the only recaped here.
 *
 * == BY VALUE & BY REFERENCE ==.
 * we can pass argument to functions by value (copies) of by reference (dealing with original vars)
 * but in passing with reference we use the & symbol
 * and even in declaring parameters for such use we don't do it with * as in C but with &
 * we can also aply const to prevent the referenced variables' value to be changed
 * this is very useful while dealing with large compound data types.
 * for fundamental types it's often not needed.
 *
 * == INLINE-FUNCTION ==
 * we have also 'inline' functions for small functions (for optimaztion).
 * which expands into values quickly wherever they appear in the code.
 * for declaring such function the key word 'inline' should be used.
 *
 * == DEFAULT-VALUES ==
 * We can pass default values to function parameters..
 *
 * == common return values ==
 * the can be found in the <cstdlib> header.
 * sample = EXIT_SUCCESS / EXIT_FALURE .
 */
