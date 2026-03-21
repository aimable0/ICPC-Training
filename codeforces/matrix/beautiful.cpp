#include <iostream>

#define SIZE 5
using namespace std;

int main(void)
{
    int array[SIZE][SIZE];
    int i_p, j_p; // index of 1

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cin >> array[i][j];
            if (array[i][j] == 1)
            {
                i_p = i;
                j_p = j;
            }
        }
    }

    int moves = 0;
    while (i_p != 2)
    {
        if (i_p > 2)
            i_p--;
        else
            i_p++;
        moves++;
    }

    while (j_p != 2)
    {
        if (j_p > 2)
            j_p--;
        else
            j_p++;
        moves++;
    }
    cout << moves << "\n";
    return 0;
}
