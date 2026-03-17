#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void)
{
    long n;
    cin >> n;

    long long values[n];
    long e = 0;

    long positive_nbrs = 0;
    long init_sum = 0;
    while (e < n)
    {
        cin >> values[e];
        if (values[e] > 0)
        {
            init_sum += values[e];
            positive_nbrs++;
        }
        e++;
    }

    long long max = values[0];

    if (positive_nbrs == n)
    {
        max = init_sum;
    }
    else
    {
        // algorithm to get the sum of subarrays
        for (long i = 0; i < n; i++)
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
                    break;
            }
        }
    }

    cout << max << endl;

    return 0;
}
