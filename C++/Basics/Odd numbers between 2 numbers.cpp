// Print all odd numbers between 2 numbers

#include <iostream>
using namespace std;

int main()
{
    int m, n, i;
    cout << "Enter 2 numbers: ";
    cin >> m >> n;

    if (m % 2 == 0)
    {
        // If m is even
        i = m + 1;
    }
    else
    {
        // If m is odd
        i = m;
    }

    for (; i <= n; i = i + 2)
    {
        cout << i << " ";
    }
}
