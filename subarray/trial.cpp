#include <iostream>
#include <numeric>

using namespace std;

int main(void)
{
    long n, x; // n: n long longegers, x: target.
    cin >> n >> x;

    long el[n]; // set up array of elements.

    long t = 0;
    while (t < n)
        cin >> el[t++]; // store all the elements.


    long sbarray = 0;
    long long sum = 0;
    for (long g = 0, i = 0; i < n; i++)
    {
        // this is being added.
        if (g > 0 && sum < x)
            break;
        g = i + 1;   // first el adjacent to ith element.
        sum = el[i]; // initialize sum.
        if (sum == x)
            sbarray++;

        // try to combine ith element with its adjacents.
        for (long long k = g; k < n; k++)
        {
            sum += el[k];
            if (sum == x)
            {
                sbarray++;
                break;
            }
            if (sum > x)
            {
                break;
            }
        }
    }
    cout << sbarray << "\n";
}
