#include <iostream>

using namespace std;

int main(void)
{
    long n, x; // n: n longegers, x: target.
    cin >> n >> x;

    long el[n]; // set up array of elements.

    long t = 0;
    while(t < n)
        cin >> el[t++]; // store all the lements.

    long sbarray = 0;
    for (long g, sum, i = 0; i < n; i++)
    {

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
