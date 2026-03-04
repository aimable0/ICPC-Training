#include <iostream>
#include <thread>
#include <chrono>
#include <sstream>

using namespace std;

int main(void)
{
    // 10 ... 1 , liftoff!
    int i = 5;
    while (i > 0)
    {
        cout << i << "\n";
        i--;
        // this_thread::sleep_for (chrono::seconds(1));
    }
    cout << "Go!\n";

    int rate;
    string data;
    do {
        cout << "Rate our service (0-10): ";
        getline(cin, data);
        stringstream(data) >> rate;
        //! this fails if the user inputs a string.
    } while (rate > 10 || rate < 0);
    cout << "Thank you!\n";

    // Ordinary for loop
    for (;;)
    {
        cout << rate << "\n";
        rate++;

        if (rate == 3)
            break;
    }

    // Range-based for loop
    // for (declaration : range) statement;

    string str {"Abcde"}; // this has begin and end.
    for (auto c : str) // we could have used char c instead of auto type..
    {
        cout << "[" << c << "]";
    }
    cout << "\n";

    auto g = 10;
    auto s = "Hy";
    cout << g << "\n";
    cout << s << "\n";

}
