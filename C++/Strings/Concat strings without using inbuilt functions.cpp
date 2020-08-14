#include <iostream>

using namespace std;

int main()
{
    char a[100], b[50];
    int i = 0, j = 0;

    cout << "Enter first string\n";
    cin.get(a, 100);

    fflush(stdin);

    cout << "Enter second string\n";
    cin.get(b, 50);

    while (a[i] != '\0')
    {
        i++;
    }

    while (b[j] != '\0')
    {
        a[i] = b[j];
        i++;
        j++;
    }

    a[i] = '\0';

    cout << a;
    
    return 0;
}