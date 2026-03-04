#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void)
{
    // How do we get data from the user
    // common input/ouput objects
    // cin, cerror, clog, cout
    // many times: cin and cout

    int age;
    string data;
    string username;

    cout << "Enter age: ";
    getline(cin, data);
    stringstream(data) >> age;
    cout << "Age: " << age << '\n';

    cout << "Enter username: ";
    getline(cin, data);
    stringstream(data) >> username;
    cout << "Username: " << username << '\n';
}

// Recap: Today we have learn't about..
/**
 * operator
 * input and output
 * - getline
 * - stringstream (we have access to using the sstream headefile)
 * - cin (which can have somedrawbacks if the input can't be interpreted)
 * - cerror
 * - clog
 * - cout (character output device)
 * - buffer (a place in memory where data is stored before being displayed on the screen )
 * - flush ( which is forcing the data in the buffer to be written to a device ex screen.)
 * - the line-continuation stuff: which helps us break a string on different lines.
 * - ways of defining constants..
 * - ways of writing constants literals using octal or hex code
 * - evaluation and expressions.
 *
 */