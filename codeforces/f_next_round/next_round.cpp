#include <iostream>

using namespace std;

int main(void)
{
    int n, k, i = 0;
    cin >> n >> k;
    int scores[n];
    k = k - 1;

    cin >> scores[i];
    if (scores[i] > 0)
    {
        i = 1;
        while (i < n)
        {
            cin >> scores[i];
            if (i >= k)
            {
                if (scores[k] == 0)
                {
                    int j = k;
                    while(scores[j] <= 0)
                        j--;
                    i = j + 1;
                    break;
                }
                if (scores[i] < scores[k])
                    break;
            }
            i++;
        }
    }

    cout << i << "\n";
    return 0;
}
