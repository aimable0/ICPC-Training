#include <iostream>

using namespace std;

int main(void)
{
    // challenge use the goto and implement a sort of loop thingy

    auto i (0);
    cout << "Start loop:\n";
    label:
        cout << "i: " << i << "\n";
        i++;
    if (i < 5)
        goto label;
    cout << "end loop\n";

    // Switch selection statement.
    // string today = "Friday";
    // switch (today) {
    //     case "Monday":
    //         cout << "Today is Monday\n";
    //         break;
    //     case "Tuesday":
    //         cout << "Today is Tuesday\n";
    //         break;
    //     case "Wednsday":
    //         cout << "Today is Wednsday\n";
    //         break;
    //     case "Thursday":
    //         cout << "Today is Thursday\n";
    //         break;
    //     case "Friday":
    //         cout << "Today is Friday\n";
    //         break;
    //     default:
    //         cout << "It's a weekend\n";
    // }

    int x = 0;
    switch (x)
    {
    case 1:
        cout << "X is 1\n";
        break;
    case 2:
        cout << "X is 2\n";
        break;
    case 3:
        cout << "X is 3\n";
        break;

    default:
        cout << "X is unknown\n";
        break;
    }
}
