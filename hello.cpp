// my first program in c++
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1 {"Aimable"};
    string name2 ("Levis");

    cout << "Hello, Mr " + name1 << endl;
    cout << "Hello, Mr " + name2 << endl;

    int num = 1;
    char c = 'c';
    double grades = 12.5;

    std::cout << "Grades: "; std::cout << grades << endl;
    std::cout << "Name: " + name1 << endl;
    std::cout << "Char: "; cout << c << endl;
    std::cout << "Num: "; std::cout << num << endl;
}


// review:
// I have learnt types in C++
// int, char, double, bool, void, nullptr
// compound data types = string.
// stream and iostream, string, and 'endl'
// the key word 'using' to do some declarations.
// standard character output device (screen) .. std:cout
// we can use name space to shorten
// varibales and initialization, =, {}, ()
// the insertion operator .. '<<'
