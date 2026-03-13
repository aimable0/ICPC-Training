#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void)
{
    long n;
    cin >> n;

    long long values[n];

    long neg_nbrs = 0, pos_nbrs = 0;
    long first_pos;
    long init_sum = 0;
    long init_max;
    long e = 0;
    bool run = false;

    while (e < n)
    {
        cin >> values[e];

        if (!run && values[e] > 0)
        {
            first_pos = e;
            run = true;
        }

        if (e == 0)
            init_max = values[e];

        init_sum += values[e];

        if (init_max < values[e])
            init_max = values[e];

        if (values[e] < 0)
            neg_nbrs++;
        else
            pos_nbrs++;

        e++;
    }

    // quick solution.
    if (pos_nbrs == n)
    {
        cout << init_sum << endl;
        return 0;
    }
    else if (neg_nbrs == n)
    {
        cout << init_max << endl;
        return 0;
    }

    // algorithm to get the sum of subarrays
    long long max = values[0];
    for (long i = first_pos; i < n; i++)
    {
        long long current_sum = values[i];

        if (max < current_sum)
            max = current_sum;

        for (long j = i + 1; j < n; j++)
        {
            current_sum += values[j];

            if (max < current_sum)
                max = current_sum;

            if (current_sum <= 0)
            {
                break;
            }
        }
    }

    cout << max << endl;

    return 0;
}
