#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int x;
    int n;
    int nbdivisors = 0;
    cin >> n;
    while (n > 0)
    {
        cin >> x;
        for (int i = 1; i * i <= x; i++)
        {
            if (x % i == 0)
                nbdivisors++;
        }

        nbdivisors *= 2;
        if (sqrt(x) - (int) sqrt(x) == 0)
            nbdivisors -= 1;

        cout << nbdivisors << "\n";
        nbdivisors = 0;
        n--;
    }
}
