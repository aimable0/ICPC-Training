#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string string1, string2;
    getline(cin, string1);
    getline(cin, string2);

    for (int i = 0; i < string1.length(); i++)
    {
        if (tolower(string1[i]) < tolower(string2[i]))
        {
            cout << "-1";
            return 0;
        } else if (tolower(string1[i]) > tolower(string2[i])) {
            cout << "1";
            return 0;
        }
    }
    cout << "0";
    return 0;
}
