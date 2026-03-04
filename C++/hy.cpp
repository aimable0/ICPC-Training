/* CONSTANTS */

#include <iostream>

using namespace std;

#define MAX_AMOUNT 10

const double pi = 3.14;
const char nln = '\n';

int main(void)
{
    // some interesting literals.
    int num = 010;
    int secondnum = 0xA;

    cout << num << endl;
    cout << secondnum << endl;

    cout << "\124oday" << endl; // using character literals' octal code.
    cout << "\x053orry" << endl; // using hex code.

    // String literals
    cout << "This is " "Aimable "    "and this is " "James" << endl;

    // line-continuation '\'
    string my_string = "Hello beautiful people this \
is James Iradukunda";
    cout << my_string << endl;

    // Raw strings: all characters in the () are treated literally.
    cout << R"%(hello this is a string with a \\backslash and ?)%" << endl;

    // keyword literals
    bool is_in = true;

    cout << "The value of PI is " << pi << nln;
    cout << "The maximum is " << MAX_AMOUNT << endl;
}

// Recap.