#include <iostream>

using namespace std;

int main()
{
    int length, i = 0;
    char a[100];

    cout << "Enter a string\n";
    cin.get(a, 100);

    for (i = 0; a[i] != '\0'; i++) {}
    cout << "Length = " << i;

    return 0;
}