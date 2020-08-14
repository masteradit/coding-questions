// Take multiple string inputs using fflush

#include <iostream>

using namespace std;

int main()
{
    int length = 80;
    
    cout << "Enter a string: ";
    char str[length];
    cin.get(str, length);
    cout << str;
    
    fflush(stdin);
    
    char str2[length];
    cin.get(str2, length);
    cout << str2;

    return 0;
}
