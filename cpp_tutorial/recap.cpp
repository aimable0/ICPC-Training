#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void)
{
    //basic input and output
    int age;
    string data;
    string my_string;

    cout << "Enter String: ";
    // cin >> my_string; // this actually only picks up a word not a sentence.
    // (i.e an space terminates the collection process)
    // and it may disrupt/ disturb other input operations below it.
    getline(cin, my_string); // this takes a cin, and string variable.
    cout << "The string is " << my_string << '\n';


    int date, month;
    cout << "Enter date and month (space separated): ";
    getline(cin, data);
    stringstream(data) >> date >> month; // get's two data from user.
    cout << "Date: " << date << " " << "Month: " << month << " \n";

    // String stream..
    cout << "Enter age: ";
    getline(cin, data);
    stringstream(data) >> age;
    cout << "Age: " << age << "\n";

    // advice.
    // always use stringstream to convert data from string to numerical and viceversa
    // always use getline to get the whole line at input.
}
