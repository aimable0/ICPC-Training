#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(void)
{
    int x = 0, n = 0;
    string line;
    getline(cin, line);
    stringstream(line) >> n;
    while (n > 0)
    {
        getline(cin, line);
        if (line.find('+') != string::npos)
            x++;
        else
            x--;
        n--;
    }
    cout << x << "\n";
    return 0;
}
