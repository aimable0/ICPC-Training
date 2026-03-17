#include <iostream>
#include <set>

using namespace std;

int main(void)
{
    std::set<int> my_set;

    int n;
    cin >> n;

    int l = 0;
    int element;
    while(l < n)
    {
        cin >> element;
        my_set.insert(element);
        l++;
    }

    cout << my_set.size();
}
