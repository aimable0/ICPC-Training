#include <iostream>
using namespace std;

int main(void)
{
    long n, x;
    cin >> n >> x;

    long array[n];
    long e = 0;
    long largest = 0;
    long min = 0;

    while (e < n)
    {
        cin >> array[e];

        if (e == 0)
        {
            largest = array[e];
            min = array[e];
        }

        if (largest < array[e])
            largest = array[e];

        if (min > array[e])
            min = array[e];

        e++; // increment e
    }

    // quick check.
    if (largest * 2 < x || min * 2 > x)
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    bool lesser = false;;
    for (long i = 0; i < n - 1; i++)
    {
        if (!(array[i] >= x) &&
            !(i > 0 && (array[i] == array[i + 1] && i + 1 != n - 1)) &&
            !(lesser && array[i] < array[i - 1]))
        {
            for (long j = i + 1; j < n; j++)
            {
                long sum = array[i] + array[j];
                if (sum == x)
                {
                    cout << i + 1 << " " << j + 1 << "\n";
                    return 0;
                }
                else if (sum < x)
                    lesser = true;
            }
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}
