#include <iostream>
#define MIN 4

using namespace std;

int main(void)
{
    long n;
    cin >> n;

    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    else if (n < MIN)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    long base[MIN] = {2, 4, 1, 3};
    long actual[n];

    for (long i = 0; i < MIN; i++)
        actual[i] = base[i];

    for (long i = MIN; i < n; i++)
    {
        actual[i] = i + 1;
        if (actual[i] == actual[i - 1] + 1)
        {
            long temp = actual[i - 3];
            actual[i - 3] = actual[i];
            actual[i] = temp;
        }
    }

    for (long i = 0; i < n; i++)
        cout << actual[i] << " ";
    return 0;
}
