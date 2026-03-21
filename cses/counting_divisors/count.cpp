#include <iostream>
#include <sstream>
using namespace std;

int main(void)
{
    int n;
    int nbdivisors = 1;
    cin >> n;
    int data[n];
    int i = 0;

    // read data.
    while(true)
    {
        if (i == n)
            break;
        cin >> data[i++];
    }

    i = 0;
    while(i < n)
    {
        for (int k = 1; k < data[i] / 2; k++)
        {
            if (data[i] % k == 0)
                nbdivisors++;
        }
        cout << nbdivisors << "\n";
        nbdivisors = 1;
        i++;
    }
}
