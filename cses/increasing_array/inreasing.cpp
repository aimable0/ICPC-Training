#include <iostream>
using namespace std;

int main(void)
{
    long n;
    cin >> n;
    long nbrs[n];
    long moves = 0;

    long j = 0;
    while (j < n)
        cin >> nbrs[j++];

    j = 0;
    while (j < n - 1)
    {
        while (nbrs[j] > nbrs[j + 1])
        {
            nbrs[j + 1]++;
            moves++;
        }
        j++;
    }
    cout << moves << "\n";
}
