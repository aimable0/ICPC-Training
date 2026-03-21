#include <iostream>
using namespace std;

int main(void)
{
    long n;
    cin >> n;

    cout << n << " ";
    while(n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2L;
            cout << n << " ";
        }
        else{
            n *= 3L;
            n++;
            cout << n << " ";
        }
    }
    return 0;
}
