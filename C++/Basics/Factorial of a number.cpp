// Factorial of a number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int factorial = 1;

    for (int j = n; j >= 1; j--)
    {
        factorial = factorial * j;
    }

    cout << "factorial of " << n << " is " << factorial << endl;
}
