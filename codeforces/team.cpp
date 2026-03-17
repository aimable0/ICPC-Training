#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(void)
{
    string data;
    int n;
    getline(cin, data);
    stringstream(data) >> n;

    int i = 0;
    int q = 0;
    int pattern_number;
    while(i < n)
    {
        getline(cin, data);
        if (data.find("11") != string::npos||
            data.find ("101") != string::npos)
            q++;
        i++;
    }
    cout << q << "\n";
}