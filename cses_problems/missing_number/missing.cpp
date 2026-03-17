#include <iostream>
using namespace std;

int main(void)
{
    long n;
    cin >> n;
    long should_be_sum = 0;
    long k = 1;
    while(k <= n)
        should_be_sum += k++;

    long nbr;
    while(n-- > 1)
    {
        cin >> nbr;
        should_be_sum -= nbr;
    }

    cout << should_be_sum << "\n";
}
