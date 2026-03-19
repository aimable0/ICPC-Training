#include <iostream>
using namespace std;

int main(void)
{
    long curr_long = 1, max_long = 1;
    string dna_sequence;
    cin >> dna_sequence;

    for (long i = 0, len = dna_sequence.length(); i < len - 1; i++)
    {
        if (dna_sequence[i] == dna_sequence[i + 1])
            curr_long += 1;
        else
            curr_long = 1;

        if (max_long < curr_long)
            max_long = curr_long;
    }

    cout << max_long << "\n";
    return 0;
}
