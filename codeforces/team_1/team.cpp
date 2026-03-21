#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int byte_to_dec(string bits_pattern)
{
    int x = 0;
    char first_bit = bits_pattern[0];
    char second_bit = bits_pattern[2];
    char third_bit = bits_pattern[4];

    if (first_bit == '1')
        x += 4;
    if (second_bit == '1')
        x += 2;
    if (third_bit == '1')
        x += 1;

    return x;
}

int main(void)
{
    int n;
    string data;
    getline(cin, data);
    stringstream(data) >> n;

    int i = 0;
    long allowed_answers = 0;

    // get the patterns;
    while (i < n)
    {
        getline(cin, data);
        int dec = byte_to_dec(data);
        if (dec >= 3 && dec != 4)
            allowed_answers++;
        i++;
    }

    cout << allowed_answers;
}
