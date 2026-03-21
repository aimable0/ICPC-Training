#include <iostream>

using namespace std;

int main(void)
{
    int n, x;           // n: n integers, x: target.
    bool found = false; // if a combination has been found.

    cin >> n >> x;
    cout << n << x << "\n";

    int el[n]; // set up array of elements.

    int t = 0;
    while (t < n)
        cin >> el[t++]; // store all the lements.

    for (int g, sum, i = 0; i < n - 1; i++)
    {
        g = i + 1;   // adjacent to ith element.
        sum = el[i]; // initialize sum.

        while (g < n)
        {
            // try to combine with adjacent elements.
            for (int k = g, p = 2; k < n && !found; k++, p++)
            {
                sum += el[k];
                if (sum == x)
                {
                    found = true;
                    cout << p << "\n";
                }
            }

            // if not found skip next right adj element to ith element and retry combining.
            if (!found)
                g++;
            else
                break;
        }
        if (found)
            break;

        // el[i] + el[1] + el[2] + el[3] + el[4];
        // el[i] + el[2] + el[3] + el[4];
        // el[i] + el[3] + el[4];
        // el[i] + el[4];

        // el[i] + el[2] + el[3] + el[4];
        // el[i] + el[3] + el[4];
        // el[i] + el[4];

        // el[i] + el[3] + el[4];
        // el[i] + el[4];

        // el[i] + el[4];
        // constraint: i < 4;
    }
    cout << "Possible combinations: " << found << "\n";
}
