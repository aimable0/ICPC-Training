#include <iostream>
#include <sstream>
#include <string>
using namespace std;


int main(void)
{
    int n;
    string data;
    getline(cin, data);
    stringstream(data) >> n;

    string words[n];
    int i = 0;
    while (i < n)
    {
        getline(cin, words[i]);
        i++;
    }

    for (string word : words)
    {
        int len = word.length();
        if (len <= 10)
            cout << word << "\n";
        else
            cout << word[0] << len - 2 << word[len-1] << "\n";
    }

    return 0;
}
