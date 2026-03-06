#include <iostream>

using namespace std;

int main(void)
{
    long n, x; // n: total elements, x: target.
    long subarrays = 0;
    int identicals = 0;
    cin >> n >> x;

    long el[n]; // set up array of elements.

    long t = 0;
    while (t < n)
    {
        cin >> el[t]; // store all the lements.
        if (t > 0 && el[t] == el[0])
            identicals += 1;
        t++;
    }

    if (identicals == n - 1)
    {
        subarrays = n - x + 1;
    }
    else
    {
        for (long g, sum, i = 0; i < n; i++)
        {
            g = i + 1;   // first el adjacent to ith element.
            sum = el[i]; // initialize sum.
            if (sum == x)
                subarrays++;

            // try to combine ith element with its adjacents.
            for (long k = g; k < n; k++)
            {
                sum += el[k];
                if (sum == x)
                    subarrays++;
                if (sum > x)
                    break;
            }
        }
    }

    cout << subarrays << "\n";

    return 0;
}
