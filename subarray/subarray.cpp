#include <iostream>

using namespace std;

int main(void)
{
    long n, x; // n: n longegers, x: target.
    long sbarray = 0;
    long identicals = 0;

    cin >> n >> x;

    long el[n]; // set up array of elements.

    long t = 0;
    while(t < n)
    {

        cin >> el[t++]; // store all the lements.
        if (t > 0 && el[t - 1] == 0)
            identicals++;
    }

    if (identicals == n - 1)
        sbarray = n - 1 + 1;
    else
        for (long g = 0, sum = 0, i = 0; i < n; i++)
        {
            // this is being added.
            if (g > 0 && sum < x)
                break;

            g = i + 1; // first el adjacent to ith element.
            sum = el[i]; // initialize sum.
            if (sum == x)
                sbarray++;

            // try to combine ith element with its adjacents.
            for (long k = g; k < n; k++)
            {
                sum += el[k];
                if (sum == x)
                    sbarray++;
                if (sum > x)
                    break;
            }
        }
    cout << sbarray << "\n";
}
